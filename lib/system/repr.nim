#
#
#            Nimrod's Runtime Library
#        (c) Copyright 2010 Andreas Rumpf
#
#    See the file "copying.txt", included in this
#    distribution, for details about the copyright.
#

# The generic ``repr`` procedure. It is an invaluable debugging tool.

#proc cstrToNimStrDummy(s: cstring): string {.inline.} =
#  result = cast[string](cstrToNimStr(s))

proc reprInt(x: int64): string {.compilerproc.} = return $x
proc reprFloat(x: float): string {.compilerproc.} = return $x

proc reprPointer(x: pointer): string {.compilerproc.} =
  var buf: array [0..59, char]
  c_sprintf(buf, "%p", x)
  return $buf

proc reprStrAux(result: var string, s: string) =
  if cast[pointer](s) == nil:
    add result, "nil"
    return
  add result, reprPointer(cast[pointer](s)) & "\""
  for c in items(s):
    case c
    of '"': add result, "\\\""
    of '\\': add result, "\\\\" # BUGFIX: forgotten
    of '\10': add result, "\\10\"\n\"" # " \n " # better readability
    of '\128' .. '\255', '\0'..'\9', '\11'..'\31':
      add result, "\\" & reprInt(ord(c))
    else: result.add(c)
  add result, "\""

proc reprStr(s: string): string {.compilerRtl.} =
  result = ""
  reprStrAux(result, s)

proc reprBool(x: bool): string {.compilerRtl.} =
  if x: result = "true"
  else: result = "false"

proc reprChar(x: char): string {.compilerRtl.} =
  result = "\'"
  case x
  of '"': add result, "\\\""
  of '\\': add result, "\\\\"
  of '\128' .. '\255', '\0'..'\31': add result, "\\" & reprInt(ord(x))
  else: add result, x
  add result, "\'"

proc reprEnum(e: int, typ: PNimType): string {.compilerRtl.} =
  if e <% typ.node.len: # BUGFIX
    result = $typ.node.sons[e].name
  else:
    result = $e & " (invalid data!)"

type
  pbyteArray = ptr array[0.. 0xffff, byte]

proc addSetElem(result: var string, elem: int, typ: PNimType) =
  case typ.kind
  of tyEnum: add result, reprEnum(elem, typ)
  of tyBool: add result, reprBool(bool(elem))
  of tyChar: add result, reprChar(chr(elem))
  of tyRange: addSetElem(result, elem, typ.base)
  of tyInt..tyInt64: add result, reprInt(elem)
  else: # data corrupt --> inform the user
    add result, " (invalid data!)"

proc reprSetAux(result: var string, p: pointer, typ: PNimType) =
  # "typ.slots.len" field is for sets the "first" field
  var elemCounter = 0  # we need this flag for adding the comma at
                       # the right places
  add result, "{"
  var u: int64
  case typ.size
  of 1: u = ze64(cast[ptr int8](p)^)
  of 2: u = ze64(cast[ptr int16](p)^)
  of 4: u = ze64(cast[ptr int32](p)^)
  of 8: u = cast[ptr int64](p)^
  else:
    var a = cast[pbyteArray](p)
    for i in 0 .. typ.size*8-1:
      if (ze(a[i div 8]) and (1 shl (i mod 8))) != 0:
        if elemCounter > 0: add result, ", "
        addSetElem(result, i+typ.node.len, typ.base)
        inc(elemCounter)
  if typ.size <= 8:
    for i in 0..sizeof(int64)*8-1:
      if (u and (1 shl i)) != 0:
        if elemCounter > 0: add result, ", "
        addSetElem(result, i+typ.node.len, typ.base)
        inc(elemCounter)
  add result, "}"

proc reprSet(p: pointer, typ: PNimType): string {.compilerRtl.} =
  result = ""
  reprSetAux(result, p, typ)

type
  TReprClosure {.final.} = object # we cannot use a global variable here
                                  # as this wouldn't be thread-safe
    marked: TCellSet
    recdepth: int       # do not recurse endless
    indent: int         # indentation

when not defined(useNimRtl):
  proc initReprClosure(cl: var TReprClosure) =
    Init(cl.marked)
    cl.recdepth = -1      # default is to display everything!
    cl.indent = 0

  proc deinitReprClosure(cl: var TReprClosure) =
    Deinit(cl.marked)

  proc reprBreak(result: var string, cl: TReprClosure) =
    add result, "\n"
    for i in 0..cl.indent-1: add result, ' '

  proc reprAux(result: var string, p: pointer, typ: PNimType,
               cl: var TReprClosure)

  proc reprArray(result: var string, p: pointer, typ: PNimType,
                 cl: var TReprClosure) =
    add result, "["
    var bs = typ.base.size
    for i in 0..typ.size div bs - 1:
      if i > 0: add result, ", "
      reprAux(result, cast[pointer](cast[TAddress](p) + i*bs), typ.base, cl)
    add result, "]"

  proc reprSequence(result: var string, p: pointer, typ: PNimType,
                    cl: var TReprClosure) =
    if p == nil:
      add result, "nil"
      return
    result.add(reprPointer(p) & "[")
    var bs = typ.base.size
    for i in 0..cast[PGenericSeq](p).len-1:
      if i > 0: add result, ", "
      reprAux(result, cast[pointer](cast[TAddress](p) + GenericSeqSize + i*bs),
              typ.Base, cl)
    add result, "]"

  proc reprRecordAux(result: var string, p: pointer, n: ptr TNimNode,
                     cl: var TReprClosure) =
    case n.kind
    of nkNone: assert(false)
    of nkSlot:
      add result, $n.name
      add result, " = "
      reprAux(result, cast[pointer](cast[TAddress](p) + n.offset), n.typ, cl)
    of nkList:
      for i in 0..n.len-1:
        if i > 0: add result, ",\n"
        reprRecordAux(result, p, n.sons[i], cl)
    of nkCase:
      var m = selectBranch(p, n)
      reprAux(result, cast[pointer](cast[TAddress](p) + n.offset), n.typ, cl)
      if m != nil: reprRecordAux(result, p, m, cl)

  proc reprRecord(result: var string, p: pointer, typ: PNimType,
                  cl: var TReprClosure) =
    add result, "["
    reprRecordAux(result, p, typ.node, cl)
    add result, "]"

  proc reprRef(result: var string, p: pointer, typ: PNimType,
               cl: var TReprClosure) =
    # we know that p is not nil here:
    when defined(boehmGC) or defined(nogc):
      var cell = cast[PCell](p)
    else:
      var cell = usrToCell(p)
    add result, "ref " & reprPointer(p)
    if cell notin cl.marked:
      # only the address is shown:
      incl(cl.marked, cell)
      add result, " --> "
      reprAux(result, p, typ.base, cl)

  proc reprAux(result: var string, p: pointer, typ: PNimType,
               cl: var TReprClosure) =
    if cl.recdepth == 0:
      add result, "..."
      return
    dec(cl.recdepth)
    case typ.kind
    of tySet: reprSetAux(result, p, typ)
    of tyArray: reprArray(result, p, typ, cl)
    of tyTuple, tyPureObject: reprRecord(result, p, typ, cl)
    of tyObject: 
      var t = cast[ptr PNimType](p)^
      reprRecord(result, p, t, cl)
    of tyRef, tyPtr:
      assert(p != nil)
      if cast[ppointer](p)^ == nil: add result, "nil"
      else: reprRef(result, cast[ppointer](p)^, typ, cl)
    of tySequence:
      reprSequence(result, cast[ppointer](p)^, typ, cl)
    of tyInt: add result, $(cast[ptr int](p)^)
    of tyInt8: add result, $int(cast[ptr Int8](p)^)
    of tyInt16: add result, $int(cast[ptr Int16](p)^)
    of tyInt32: add result, $int(cast[ptr Int32](p)^)
    of tyInt64: add result, $(cast[ptr Int64](p)^)
    of tyFloat: add result, $(cast[ptr float](p)^)
    of tyFloat32: add result, $(cast[ptr float32](p)^)
    of tyFloat64: add result, $(cast[ptr float64](p)^)
    of tyEnum: add result, reprEnum(cast[ptr int](p)^, typ)
    of tyBool: add result, reprBool(cast[ptr bool](p)^)
    of tyChar: add result, reprChar(cast[ptr char](p)^)
    of tyString: reprStrAux(result, cast[ptr string](p)^)
    of tyCString: reprStrAux(result, $(cast[ptr cstring](p)^))
    of tyRange: reprAux(result, p, typ.base, cl)
    of tyProc, tyPointer:
      if cast[ppointer](p)^ == nil: add result, "nil"
      else: add result, reprPointer(cast[ppointer](p)^)
    else:
      add result, "(invalid data!)"
    inc(cl.recdepth)

proc reprOpenArray(p: pointer, length: int, elemtyp: PNimType): string {.
                   compilerRtl.} =
  var
    cl: TReprClosure
  initReprClosure(cl)
  result = "["
  var bs = elemtyp.size
  for i in 0..length - 1:
    if i > 0: add result, ", "
    reprAux(result, cast[pointer](cast[TAddress](p) + i*bs), elemtyp, cl)
  add result, "]"
  deinitReprClosure(cl)

when not defined(useNimRtl):
  proc reprAny(p: pointer, typ: PNimType): string =
    var
      cl: TReprClosure
    initReprClosure(cl)
    result = ""
    if typ.kind in {tyObject, tyPureObject, tyTuple, tyArray, tySet}:
      reprAux(result, p, typ, cl)
    else:
      var p = p
      reprAux(result, addr(p), typ, cl)
    add result, "\n"
    deinitReprClosure(cl)

