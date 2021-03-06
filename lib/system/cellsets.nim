#
#
#            Nimrod's Runtime Library
#        (c) Copyright 2009 Andreas Rumpf
#
#    See the file "copying.txt", included in this
#    distribution, for details about the copyright.
#

# Efficient set of pointers for the GC (and repr)

type
  TCell {.pure.} = object
    refcount: int  # the refcount and some flags
    typ: PNimType
    when debugGC:
      filename: cstring
      line: int

  PCell = ptr TCell

  PPageDesc = ptr TPageDesc
  TBitIndex = range[0..UnitsPerPage-1]
  TPageDesc {.final, pure.} = object
    next: PPageDesc # all nodes are connected with this pointer
    key: TAddress   # start address at bit 0
    bits: array[TBitIndex, int] # a bit vector

  PPageDescArray = ptr array[0..1000_000, PPageDesc]
  TCellSet {.final, pure.} = object
    counter, max: int
    head: PPageDesc
    data: PPageDescArray

  PCellArray = ptr array[0..100_000_000, PCell]
  TCellSeq {.final, pure.} = object
    len, cap: int
    d: PCellArray

# ------------------- cell set handling ---------------------------------------

proc contains(s: TCellSeq, c: PCell): bool {.inline.} =
  for i in 0 .. s.len-1:
    if s.d[i] == c: return True
  return False

proc add(s: var TCellSeq, c: PCell) {.inline.} =
  if s.len >= s.cap:
    s.cap = s.cap * 3 div 2
    var d = cast[PCellArray](alloc(s.cap * sizeof(PCell)))
    copyMem(d, s.d, s.len * sizeof(PCell))
    dealloc(s.d)
    s.d = d
    # XXX: realloc?
  s.d[s.len] = c
  inc(s.len)

proc init(s: var TCellSeq, cap: int = 1024) =
  s.len = 0
  s.cap = cap
  s.d = cast[PCellArray](alloc0(cap * sizeof(PCell)))

proc deinit(s: var TCellSeq) = 
  dealloc(s.d)
  s.d = nil
  s.len = 0
  s.cap = 0

const
  InitCellSetSize = 1024 # must be a power of two!

proc Init(s: var TCellSet) =
  s.data = cast[PPageDescArray](alloc0(InitCellSetSize * sizeof(PPageDesc)))
  s.max = InitCellSetSize-1
  s.counter = 0
  s.head = nil

proc Deinit(s: var TCellSet) =
  var it = s.head
  while it != nil:
    var n = it.next
    dealloc(it)
    it = n
  s.head = nil # play it safe here
  dealloc(s.data)
  s.data = nil
  s.counter = 0

proc nextTry(h, maxHash: int): int {.inline.} =
  result = ((5*h) + 1) and maxHash
  # For any initial h in range(maxHash), repeating that maxHash times
  # generates each int in range(maxHash) exactly once (see any text on
  # random-number generation for proof).
  
proc CellSetGet(t: TCellSet, key: TAddress): PPageDesc =
  var h = cast[int](key) and t.max
  while t.data[h] != nil:
    if t.data[h].key == key: return t.data[h]
    h = nextTry(h, t.max)
  return nil

proc CellSetRawInsert(t: TCellSet, data: PPageDescArray, desc: PPageDesc) =
  var h = cast[int](desc.key) and t.max
  while data[h] != nil:
    assert(data[h] != desc)
    h = nextTry(h, t.max)
  assert(data[h] == nil)
  data[h] = desc

proc CellSetEnlarge(t: var TCellSet) =
  var oldMax = t.max
  t.max = ((t.max+1)*2)-1
  var n = cast[PPageDescArray](alloc0((t.max + 1) * sizeof(PPageDesc)))
  for i in 0 .. oldmax:
    if t.data[i] != nil:
      CellSetRawInsert(t, n, t.data[i])
  dealloc(t.data)
  t.data = n

proc CellSetPut(t: var TCellSet, key: TAddress): PPageDesc =
  var h = cast[int](key) and t.max
  while true:
    var x = t.data[h]
    if x == nil: break
    if x.key == key: return x
    h = nextTry(h, t.max)

  if ((t.max+1)*2 < t.counter*3) or ((t.max+1)-t.counter < 4):
    CellSetEnlarge(t)
  inc(t.counter)
  h = cast[int](key) and t.max
  while t.data[h] != nil: h = nextTry(h, t.max)
  assert(t.data[h] == nil)
  # the new page descriptor goes into result
  result = cast[PPageDesc](alloc0(sizeof(TPageDesc)))
  result.next = t.head
  result.key = key
  t.head = result
  t.data[h] = result

# ---------- slightly higher level procs --------------------------------------

proc contains(s: TCellSet, cell: PCell): bool =
  var u = cast[TAddress](cell)
  var t = CellSetGet(s, u shr PageShift)
  if t != nil:
    u = (u %% PageSize) /% MemAlign
    result = (t.bits[u shr IntShift] and (1 shl (u and IntMask))) != 0
  else:
    result = false

proc incl(s: var TCellSet, cell: PCell) {.noinline.} =
  var u = cast[TAddress](cell)
  var t = CellSetPut(s, u shr PageShift)
  u = (u %% PageSize) /% MemAlign
  t.bits[u shr IntShift] = t.bits[u shr IntShift] or (1 shl (u and IntMask))

proc excl(s: var TCellSet, cell: PCell) =
  var u = cast[TAddress](cell)
  var t = CellSetGet(s, u shr PageShift)
  if t != nil:
    u = (u %% PageSize) /% MemAlign
    t.bits[u shr IntShift] = (t.bits[u shr IntShift] and
                              not (1 shl (u and IntMask)))

proc containsOrIncl(s: var TCellSet, cell: PCell): bool = 
  var u = cast[TAddress](cell)
  var t = CellSetGet(s, u shr PageShift)
  if t != nil:
    u = (u %% PageSize) /% MemAlign
    result = (t.bits[u shr IntShift] and (1 shl (u and IntMask))) != 0
    if not result: 
      t.bits[u shr IntShift] = t.bits[u shr IntShift] or
          (1 shl (u and IntMask))
  else: 
    Incl(s, cell)
    result = false

iterator elements(t: TCellSet): PCell {.inline.} =
  # while traversing it is forbidden to add pointers to the tree!
  var r = t.head
  while r != nil:
    var i = 0
    while i <= high(r.bits):
      var w = r.bits[i] # taking a copy of r.bits[i] here is correct, because
      # modifying operations are not allowed during traversation
      var j = 0
      while w != 0:         # test all remaining bits for zero
        if (w and 1) != 0:  # the bit is set!
          yield cast[PCell]((r.key shl PageShift) or
                              (i shl IntShift +% j) *% MemAlign)
        inc(j)
        w = w shr 1
      inc(i)
    r = r.next

