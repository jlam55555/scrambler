<?php
  $numMoves = 25;
  $moves = [];
  $turnTypes = [ "U", "R", "L", "D", "B", "F" ];
  $revTypes = [ " ", "2", "'" ];
  $type = $turnTypes[rand(0,5)];
  echo "\n";
  while(count($moves) < $numMoves)
    if($moves == [] || end($moves) != ($type = $turnTypes[rand(0,5)])) {
      $moves[] = $type;
      echo $type . $revTypes[rand(0,2)] . (count($moves)%5==0?"\n":"\t");
    }
  echo "\n";
?>
