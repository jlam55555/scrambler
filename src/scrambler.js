var numMoves = 25,
    moves = [],
    turnTypes = [ "U", "R", "L", "D", "B", "F" ],
    revTypes = [ " ", "2", "'" ],
    type = turnTypes[Math.floor(Math.random()*6)];
console.log();
while(moves.length < numMoves)
  if(moves == [] || moves.slice(-1)[0] != (type = turnTypes[Math.floor(Math.random()*6)])) {
    moves.push(type);
    process.stdout.write(type + revTypes[Math.floor(Math.random()*3)] + (moves.length % 5 == 0 ? "\n" : "\t"));
  }
console.log();
