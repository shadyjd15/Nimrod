//
//
//           The Nimrod Compiler
//        (c) Copyright 2009 Andreas Rumpf
//
//    See the file "copying.txt", included in this
//    distribution, for details about the copyright.
//
unit llstream;

// Low-level streams for high performance.

interface

uses
  nsystem, charsets, strutils;

type
  TLLStreamKind = (
    llsNone,          // null stream: reading and writing has no effect
    llsString,        // stream encapsulates a string
    llsFile,          // stream encapsulates a file
    llsStdIn);        // stream encapsulates stdin
  TLLStream = object(NObject)
    kind: TLLStreamKind; // accessible for low-level access (lexbase uses this)
    f: TBinaryFile;
    s: string;
    rd, wr: int; // for string streams
  end;
  PLLStream = ^TLLStream;
  

function LLStreamOpen(const data: string): PLLStream; overload;
function LLStreamOpen(var f: TBinaryFile): PLLStream; overload;
function LLStreamOpen(const filename: string; mode: TFileMode): PLLStream; overload;
function LLStreamOpen(): PLLStream; overload;
function LLStreamOpenStdIn(): PLLStream;

procedure LLStreamClose(s: PLLStream);

function LLStreamRead(s: PLLStream; buf: pointer; bufLen: int): int; 
function LLStreamReadLine(s: PLLStream): string; 
function LLStreamReadAll(s: PLLStream): string;

procedure LLStreamWrite(s: PLLStream; const data: string); overload;
procedure LLStreamWrite(s: PLLStream; data: Char); overload;
procedure LLStreamWrite(s: PLLStream; buf: pointer; buflen: int); overload;

procedure LLStreamWriteln(s: PLLStream; const data: string);

function LLStreamAtEnd(s: PLLStream): bool;

implementation

function LLStreamOpen(const data: string): PLLStream; overload;
begin
  new(result);
  {@ignore}
  fillChar(result^, sizeof(result^), 0);
  {@emit}
  result.s := data;
  result.kind := llsString;
end;

function LLStreamOpen(var f: TBinaryFile): PLLStream; overload;
begin
  new(result);
  {@ignore}
  fillChar(result^, sizeof(result^), 0);
  {@emit}
  result.f := f;
  result.kind := llsFile;
end;

function LLStreamOpen(const filename: string; mode: TFileMode): PLLStream; overload;
begin
  new(result);
  {@ignore}
  fillChar(result^, sizeof(result^), 0);
  {@emit}
  result.kind := llsFile;
  if not OpenFile(result.f, filename, mode) then result := nil;
end;

function LLStreamOpen(): PLLStream; overload;
begin
  new(result);
  {@ignore}
  fillChar(result^, sizeof(result^), 0);
  {@emit}
  result.kind := llsNone;
end;

function LLStreamOpenStdIn(): PLLStream;
begin
  new(result);
  {@ignore}
  fillChar(result^, sizeof(result^), 0);
  {@emit}
  result.kind := llsStdIn;
  result.s := '';
end;

procedure LLStreamClose(s: PLLStream);
begin
  case s.kind of 
    llsNone, llsString, llsStdIn: begin end;
    llsFile: nimCloseFile(s.f); 
  end
end;

function LLreadFromStdin(s: PLLStream; buf: pointer; bufLen: int): int;
var
  line: string;
  L: int;
begin
  s.s := '';
  s.rd := 0;
  while true do begin
    write(output, 'Nimrod> ');
    line := readLine(input);
    L := length(line);
    add(s.s, line);
    add(s.s, nl);
    if (L > 0) and (line[L-1+strStart] = '#') then break;
  end;
  result := min(bufLen, length(s.s)-s.rd);
  if result > 0 then begin
    copyMem(buf, addr(s.s[strStart+s.rd]), result);
    inc(s.rd, result)
  end
end;

function LLStreamRead(s: PLLStream; buf: pointer; bufLen: int): int; 
begin
  case s.kind of 
    llsNone: result := 0;
    llsString: begin
      result := min(bufLen, length(s.s)-s.rd);
      if result > 0 then begin
        copyMem(buf, addr(s.s[strStart+s.rd]), result);
        inc(s.rd, result)
      end
    end;
    llsFile:  result := readBuffer(s.f, buf, bufLen);
    llsStdIn: result := LLreadFromStdin(s, buf, bufLen);
  end
end;

function LLStreamReadLine(s: PLLStream): string; 
begin
  case s.kind of 
    llsNone: result := '';
    llsString: begin
      result := '';
      while s.rd < length(s.s) do begin
        case s.s[s.rd+strStart] of 
          #13: begin 
            inc(s.rd); 
            if s.s[s.rd+strStart] = #10 then inc(s.rd);
            break
          end;
          #10: begin inc(s.rd); break end;
          else begin
            addChar(result, s.s[s.rd+strStart]);
            inc(s.rd);
          end
        end
      end
    end;
    llsFile: result := readLine(s.f);
    llsStdIn: result := readLine(input);
  end
end;

function LLStreamAtEnd(s: PLLStream): bool;
begin
  case s.kind of
    llsNone: result := true;
    llsString: result := s.rd >= length(s.s);
    llsFile: result := endOfFile(s.f);
    llsStdIn: result := false;
  end
end;

procedure LLStreamWrite(s: PLLStream; const data: string); overload;
begin
  case s.kind of 
    llsNone, llsStdIn: begin end;
    llsString: begin add(s.s, data); inc(s.wr, length(data)) end;
    llsFile: nimWrite(s.f, data);
  end;
end;

procedure LLStreamWriteln(s: PLLStream; const data: string);
begin
  LLStreamWrite(s, data);
  LLStreamWrite(s, nl);
end;

procedure LLStreamWrite(s: PLLStream; data: Char); overload;
var
  c: char;
begin
  case s.kind of 
    llsNone, llsStdIn: begin end;
    llsString: begin addChar(s.s, data); inc(s.wr); end;
    llsFile: begin
      c := data;
      {@discard} writeBuffer(s.f, addr(c), sizeof(c));
    end
  end
end;

procedure LLStreamWrite(s: PLLStream; buf: pointer; buflen: int); overload;
begin
  case s.kind of 
    llsNone, llsStdIn: begin end;
    llsString: begin
      if bufLen > 0 then begin
        setLength(s.s, length(s.s) + bufLen);
        copyMem(addr(s.s[strStart+s.wr]), buf, bufLen);
        inc(s.wr, bufLen);
      end
    end;
    llsFile: {@discard} writeBuffer(s.f, buf, bufLen);
  end
end;

function LLStreamReadAll(s: PLLStream): string;
const  
  bufSize = 2048;
var
  bytes, i: int;
begin
  case s.kind of 
    llsNone, llsStdIn: result := '';
    llsString: begin
      if s.rd = 0 then result := s.s
      else result := ncopy(s.s, s.rd+strStart);
      s.rd := length(s.s);
    end;
    llsFile: begin
      result := newString(bufSize);
      bytes := readBuffer(s.f, addr(result[strStart]), bufSize);
      i := bytes;
      while bytes = bufSize do begin
        setLength(result, i+bufSize);
        bytes := readBuffer(s.f, addr(result[i+strStart]), bufSize);
        inc(i, bytes);
      end;
      setLength(result, i);
    end
  end
end;

end.
