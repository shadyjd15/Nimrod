# test explicit type instantiation

type
  TDict*[TKey, TValue] = object 
    data: seq[tuple[k: TKey, v: TValue]]
  PDict*[TKey, #with `==`(a, b: TKey): bool
               #     hash(a: TKey): int, 
         TValue] = ref TDict[TKey, TValue]
  
proc newDict*[TKey, TValue](): PDict[TKey, TValue] = 
  new(result)
  result.data = @[]
  
proc add*[TKey, TValue](d: PDict[TKey, TValue], k: TKey, v: TValue) = 
  d.data.add((k, v))
  
iterator items*[Tkey, tValue](d: PDict[TKey, TValue]): tuple[k: TKey, 
               v: TValue] = 
  for k, v in items(d.data): yield (k, v)
    
var d = newDict[int, string]()
d.add(12, "12")
d.add(13, "13")
for k, v in items(d): 
  stdout.write("Key: ", $k, " value: ", v)

var c = newDict[char, string]()
c.add('A', "12")
c.add('B', "13")
for k, v in items(c): 
  stdout.write(" Key: ", $k, " value: ", v)

