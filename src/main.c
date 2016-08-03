#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));

  int iterations = 5;
  if(argc > 1) {
    char *ptr;
    iterations = strtol(argv[1], &ptr, 10);
  }
  if(iterations == 0)
    iterations = 5;

  FILE *fp;
  fp = fopen("scrambles.txt", "w");

  struct timespec start, end;
  clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &start);

  for(int i = 1; i <= iterations; i++) {
    int numMoves = 25, types = 0;
    char moves[25], turnTypes[] = { 'U', 'R', 'L', 'D', 'B', 'F' }, revTypes[] = { ' ', '2', '\'' }, type = turnTypes[rand() % 6];
    char string[20];
    snprintf(string, sizeof(string), "%s %d%s", "Scramble", i, ":\n\0");
    fwrite(string, 1, strlen(string), fp);
    while(types < numMoves)
      if(types == 0 || moves[types-1] != (type = turnTypes[rand() % 6])) {
        moves[types++] = type;
        snprintf(string, sizeof(string), "%c%c%c%c", type, revTypes[rand()%3], types%5==0?'\n':'\t', '\0'); 
        fwrite(string, 1, strlen(string), fp);
      }
    strcpy(string, "\n");
    fwrite(string, 1, strlen(string), fp);
  }
  
  fclose(fp);

  clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end);
  printf("\nCompleted %d iterations in %lfs.\nSee output at scrambles.txt.\n\n", iterations, (double) ((end.tv_sec-start.tv_sec)+((double) (end.tv_nsec-start.tv_nsec))/1.0E9));

}
