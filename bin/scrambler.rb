turnTypes = [ "U", "R", "L", "D", "B", "F" ]
revTypes = [ " ", "2", "'" ]
prng = Random.new
moves, numMoves, type = [], 25, turnTypes[prng.rand(6)]
puts
while moves.length < numMoves do
  if moves == [] or moves.last != (type = turnTypes[prng.rand(6)]) then
    moves << type
    print type + revTypes[prng.rand(3)] + (moves.length%5==0?"\n":"\t")
  end
end
puts
