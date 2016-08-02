from random import randint

numMoves, moves = 25, []
turnTypes = [ "U", "R", "L", "D", "B", "F" ]
revTypes = [ " ", "2", "'" ]
print();
while len(moves) < numMoves:
  type = turnTypes[randint(0, 5)]
  if len(moves) == 0 or moves[-1] != type:
    moves.append(type)
    print("%s%s" % (type, revTypes[randint(0, 2)]), end = ("\n" if len(moves) % 5 == 0 else "\t"))
print();
