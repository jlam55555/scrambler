#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int numMoves = 25, types = 0;
  char moves[25], turnTypes[] = { 'U', 'R', 'L', 'D', 'B', 'F' }, revTypes[] = { ' ', '2', '\'' }, type = turnTypes[rand() % 6];
  printf("\n");
  while(types < numMoves)
    if(types == 0 || moves[types-1] != (type = turnTypes[rand() % 6])) {
      moves[types++] = type;
      printf("%c%c%c", type, revTypes[rand()%3], types%5==0?'\n':'\t'); 
    }
  printf("\n");
}
