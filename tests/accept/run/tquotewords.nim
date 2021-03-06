# Test an idea I recently had:

import macros

macro quoteWords(n: expr): expr = 
  result = newNimNode(nnkBracket, n)
  for i in 1..n.len-1:
    expectKind(n[i], nnkIdent)
    result.add(toStrLit(n[i]))
  
const
  myWordList = quoteWords(this, an, example)

var s = ""
for w in items(myWordList):
  s.add(w)

echo s #OUT thisanexample

