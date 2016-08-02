var numMoves = 25,
    moves = [],
    turnTypes = [ "U", "R", "L", "D", "B", "F" ],
    revTypes = [ " ", "2", "'" ],
    types = 0,
    type = turnTypes[Math.floor(Math.random()*6)];
console.log();
while(types < numMoves)
  if(types == 0 || moves[types-1] != (type = turnTypes[Math.floor(Math.random()*6)])) {
    moves[types++] = type;
    process.stdout.write(type + revTypes[Math.floor(Math.random()*3)] + (types % 5 == 0 ? "\n" : "\t"));
  }
console.log();
