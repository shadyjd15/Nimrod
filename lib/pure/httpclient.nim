#
#
#            Nimrod's Runtime Library
#        (c) Copyright 2010 Dominik Picheta, Andreas Rumpf
#
#    See the file "copying.txt", included in this
#    distribution, for details about the copyright.
#

## This module implements a simple HTTP client that can be used to retrieve
## webpages/other data.
##
## Retrieving a website
## ====================
## 
## This example uses HTTP GET to retrieve
## ``http://google.com``
## 
## .. code-block:: nimrod
##   echo(getContent("http://google.com"))
## 
## Using HTTP POST
## ===============
## 
## This example demonstrates the usage of the W3 HTML Validator, it 
## uses ``multipart/form-data`` as the ``Content-Type`` to send the HTML to
## the server. 
## 
## .. code-block:: nimrod
##   var headers: string = "Content-Type: multipart/form-data; boundary=xyz\c\L"
##   var body: string = "--xyz\c\L"
##   # soap 1.2 output
##   body.add("Content-Disposition: form-data; name=\"output\"\c\L")
##   body.add("\c\Lsoap12\c\L")
##    
##   # html
##   body.add("--xyz\c\L")
##   body.add("Content-Disposition: form-data; name=\"uploaded_file\";" &
##            " filename=\"test.html\"\c\L")
##   body.add("Content-Type: text/html\c\L")
##   body.add("\c\L<html><head></head><body><p>test</p></body></html>\c\L")
##   body.add("--xyz--")
##    
##   echo(postContent("http://validator.w3.org/check", headers, body))

import sockets, strutils, parseurl, parseutils, strtabs

type
  TResponse* = tuple[
    version: string, 
    status: string, 
    headers: PStringTable,
    body: string]

  EInvalidProtocol* = object of EBase ## exception that is raised when server
                                      ## does not conform to the implemented
                                      ## protocol

  EHttpRequestErr* = object of EBase ## Thrown in the ``getContent`` proc 
                                     ## and ``postContent`` proc,
                                     ## when the server returns an error

proc httpError(msg: string) =
  var e: ref EInvalidProtocol
  new(e)
  e.msg = msg
  raise e
  
proc fileError(msg: string) =
  var e: ref EIO
  new(e)
  e.msg = msg
  raise e

proc charAt(d: var string, i: var int, s: TSocket): char {.inline.} = 
  result = d[i]
  while result == '\0':
    d = s.recv()
    i = 0
    result = d[i]

proc parseChunks(d: var string, start: int, s: TSocket): string =
  # get chunks:
  var i = start
  result = ""
  while true:
    var chunkSize = 0
    var digitFound = false
    while true: 
      case d[i]
      of '0'..'9': 
        digitFound = true
        chunkSize = chunkSize shl 4 or (ord(d[i]) - ord('0'))
      of 'a'..'f': 
        digitFound = true
        chunkSize = chunkSize shl 4 or (ord(d[i]) - ord('a') + 10)
      of 'A'..'F': 
        digitFound = true
        chunkSize = chunkSize shl 4 or (ord(d[i]) - ord('A') + 10)
      of '\0': 
        d = s.recv()
        i = -1
      else: break
      inc(i)
    if not digitFound: httpError("Chunksize expected")
    if chunkSize <= 0: break
    while charAt(d, i, s) notin {'\C', '\L', '\0'}: inc(i)
    if charAt(d, i, s) == '\C': inc(i)
    if charAt(d, i, s) == '\L': inc(i)
    else: httpError("CR-LF after chunksize expected")
    
    var x = copy(d, i, i+chunkSize-1)
    var size = x.len
    result.add(x)
    inc(i, size)
    if size < chunkSize:
      # read in the rest:
      var missing = chunkSize - size
      var L = result.len
      setLen(result, L + missing)    
      while missing > 0:
        var bytesRead = s.recv(addr(result[L]), missing)
        inc(L, bytesRead)
        dec(missing, bytesRead)
      # next chunk:
      d = s.recv()
      i = 0
    # skip trailing CR-LF:
    while charAt(d, i, s) in {'\C', '\L'}: inc(i)
  
proc parseBody(d: var string, start: int, s: TSocket,
               headers: PStringTable): string =
  if headers["Transfer-Encoding"] == "chunked":
    result = parseChunks(d, start, s)
  else:
    result = copy(d, start)
    # -REGION- Content-Length
    # (http://tools.ietf.org/html/rfc2616#section-4.4) NR.3
    var contentLengthHeader = headers["Content-Length"]
    if contentLengthHeader != "":
      var length = contentLengthHeader.parseint()
      while result.len() < length: result.add(s.recv())
    else:
      # (http://tools.ietf.org/html/rfc2616#section-4.4) NR.4 TODO
      
      # -REGION- Connection: Close
      # (http://tools.ietf.org/html/rfc2616#section-4.4) NR.5
      if headers["Connection"] == "close":
        while True:
          var moreData = recv(s)
          if moreData.len == 0: break
          result.add(moreData)

proc parseResponse(s: TSocket): TResponse =
  var d = s.recv()
  var i = 0

  # Parse the version
  # Parses the first line of the headers
  # ``HTTP/1.1`` 200 OK
  var L = skipIgnoreCase(d, "HTTP/1.1", i)
  if L > 0:
    result.version = "1.1"
    inc(i, L)
  else:
    L = skipIgnoreCase(d, "HTTP/1.0", i)
    if L > 0:
      result.version = "1.0"
      inc(i, L)
    else: 
      httpError("invalid HTTP header")
  L = skipWhiteSpace(d, i)
  if L <= 0: httpError("invalid HTTP header")
  inc(i, L)
  
  result.status = ""
  while d[i] notin {'\C', '\L', '\0'}:
    result.status.add(d[i])
    inc(i)
  if d[i] == '\C': inc(i)
  if d[i] == '\L': inc(i)
  else: httpError("invalid HTTP header, CR-LF expected")

  # Parse the headers
  # Everything after the first line leading up to the body
  # htype: hvalue
  result.headers = newStringTable(modeCaseInsensitive)
  while true:
    var key = ""
    while d[i] != ':':
      if d[i] == '\0': httpError("invalid HTTP header, ':' expected")
      key.add(d[i])
      inc(i)
    inc(i) # skip ':'
    if d[i] == ' ': inc(i) # skip if the character is a space
    var val = ""
    while d[i] notin {'\C', '\L', '\0'}:
      val.add(d[i])
      inc(i)
    
    result.headers[key] = val
    
    if d[i] == '\C': inc(i)
    if d[i] == '\L': inc(i)
    else: httpError("invalid HTTP header, CR-LF expected")
    
    if d[i] == '\C': inc(i)
    if d[i] == '\L':
      inc(i)
      break
    
  result.body = parseBody(d, i, s, result.headers) 

type
  THttpMethod* = enum ## the requested HttpMethod
    httpHEAD,         ## Asks for the response identical to the one that would
                      ## correspond to a GET request, but without the response
                      ## body.
    httpGET,          ## Retrieves the specified resource.
    httpPOST,         ## Submits data to be processed to the identified 
                      ## resource. The data is included in the body of the 
                      ## request.
    httpPUT,          ## Uploads a representation of the specified resource.
    httpDELETE,       ## Deletes the specified resource.
    httpTRACE,        ## Echoes back the received request, so that a client 
                      ## can see what intermediate servers are adding or
                      ## changing in the request.
    httpOPTIONS,      ## Returns the HTTP methods that the server supports 
                      ## for specified address.
    httpCONNECT       ## Converts the request connection to a transparent 
                      ## TCP/IP tunnel, usually used for proxies.

proc request*(url: string, httpMethod = httpGET, extraHeaders = "", 
              body = ""): TResponse =
  ## | Requests ``url`` with the specified ``httpMethod``.
  ## | Extra headers can be specified and must be seperated by ``\c\L``
  var r = parseUrl(url)
  
  var headers = copy($httpMethod, len("http"))
  if r.path != "":
    headers.add(" " & r.path & r.query)
  headers.add(" / HTTP/1.1\c\L")
  
  add(headers, "Host: " & r.hostname & "\c\L")
  add(headers, extraHeaders)
  add(headers, "\c\L")

  var s = socket()
  s.connect(r.hostname, TPort(80))
  s.send(headers)
  if body != "":
    s.send(body)
  
  result = parseResponse(s)
  s.close()
  
proc redirection(status: string): bool =
  const redirectionNRs = ["301", "302", "303", "307"]
  for i in items(redirectionNRs):
    if status.startsWith(i):
      return True
  
proc get*(url: string, maxRedirects = 5): TResponse =
  ## | GET's the ``url`` and returns a ``TResponse`` object
  ## | This proc also handles redirection
  result = request(url)
  for i in 1..maxRedirects:
    if result.status.redirection():
      var locationHeader = result.headers["Location"]
      if locationHeader == "": httpError("location header expected")
      result = request(locationHeader)
      
proc getContent*(url: string): string =
  ## | GET's the body and returns it as a string.
  ## | Raises exceptions for the status codes ``4xx`` and ``5xx``
  var r = get(url)
  if r.status[0] in {'4','5'}:
    raise newException(EHTTPRequestErr, r.status)
  else:
    return r.body
  
proc post*(url: string, extraHeaders = "", body = "", 
           maxRedirects = 5): TResponse =
  ## | POST's ``body`` to the ``url`` and returns a ``TResponse`` object.
  ## | This proc adds the necessary Content-Length header.
  ## | This proc also handles redirection.
  var xh = extraHeaders & "Content-Length: " & $len(body) & "\c\L"
  result = request(url, httpPOST, xh, body)
  for i in 1..maxRedirects:
    if result.status.redirection():
      var locationHeader = result.headers["Location"]
      if locationHeader == "": httpError("location header expected")
      var meth = if result.status != "307": httpGet else: httpPost
      result = request(locationHeader, meth, xh, body)
  
proc postContent*(url: string, extraHeaders = "", body = ""): string =
  ## | POST's ``body`` to ``url`` and returns the response's body as a string
  ## | Raises exceptions for the status codes ``4xx`` and ``5xx``
  var r = post(url, extraHeaders, body)
  if r.status[0] in {'4','5'}:
    raise newException(EHTTPRequestErr, r.status)
  else:
    return r.body
  
proc downloadFile*(url: string, outputFilename: string) =
  ## Downloads ``url`` and saves it to ``outputFilename``
  var f: TFile
  if open(f, outputFilename, fmWrite):
    f.write(getContent(url))
    f.close()
  else:
    fileError("Unable to open file")


when isMainModule:
  #downloadFile("http://force7.de/nimrod/index.html", "nimrodindex.html")
  #downloadFile("http://www.httpwatch.com/", "ChunkTest.html")
  #downloadFile("http://validator.w3.org/check?uri=http%3A%2F%2Fgoogle.com",
  # "validator.html")

  #var r = get("http://validator.w3.org/check?uri=http%3A%2F%2Fgoogle.com&
  #  charset=%28detect+automatically%29&doctype=Inline&group=0")
  
  var headers: string = "Content-Type: multipart/form-data; boundary=xyz\c\L"
  var body: string = "--xyz\c\L"
  # soap 1.2 output
  body.add("Content-Disposition: form-data; name=\"output\"\c\L")
  body.add("\c\Lsoap12\c\L")
  
  # html
  body.add("--xyz\c\L")
  body.add("Content-Disposition: form-data; name=\"uploaded_file\";" &
           " filename=\"test.html\"\c\L")
  body.add("Content-Type: text/html\c\L")
  body.add("\c\L<html><head></head><body><p>test</p></body></html>\c\L")
  body.add("--xyz--")

  echo(postContent("http://validator.w3.org/check", headers, body))
