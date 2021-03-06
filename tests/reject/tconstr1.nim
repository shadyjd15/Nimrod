# Test array, record constructors

type
  TComplexRecord = tuple[
    s: string,
    x, y: int,
    z: float,
    chars: set[Char]]

proc testSem =
  var
    things: array [0..1, TComplexRecord] = [
      (s: "hi", x: 69, y: 45, z: 0.0, chars: {'a', 'b', 'c'}),
      (s: "hi", x: 69, y: 45, z: 1.0, chars: {'a', 'b', 'c'})]
  write(stdout, things[0].x)

const
  things: array [0..1, TComplexRecord] = [
    (s: "hi", x: 69, y: 45, z: 0.0, chars: {'a', 'b', 'c'}),
    (s: "hi", x: 69, y: 45, z: 1.0)] #ERROR
  otherThings = [  # the same
    (s: "hi", x: 69, y: 45, z: 0.0, chars: {'a', 'b', 'c'}),
    (s: "hi", x: 69, y: 45, z: 1.0, chars: {'a'})]
