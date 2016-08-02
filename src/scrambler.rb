turnTypes = [ "U", "R", "L", "D", "B", "F" ]
revTypes = [ " ", "2", "'" ]
prng, moves, numMoves, types, type = Random.new, [], 25, 0, turnTypes[prng.rand(6)]
puts
while types < numMoves do
  if types == 0 or moves[types-1] != (type = turnTypes[prng.rand(6)]) then
    moves[types = types+1] = type
    print type + revTypes[prng.rand(3)] + (types % 5 == 0 ? "\n" : "\t")
  end
end
puts
