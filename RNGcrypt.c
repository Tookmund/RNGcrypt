#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define OUTPUTSIZE 1024

int* randomdata (int size) {
  int i;
  int rnd [OUTPUTSIZE+1];
  for(i = 0; i <= size; ++i) {
    rnd[i] = (char)rand();
  }
  return rnd;
}
int main (int argc, char* argv[]) {
  srand(time(NULL));
  if (argc < 1) {
    printf("%s -f filename or %s text",argv[0],argv[0]);
    exit(0);
  }
  if (argv[1] == "-f") {
    FILE* fp = fopen(argv[2],"r");
    if (fp == NULL) {
      perror(argv[2]);
      exit(EXIT_FAILURE);
    }
  }
  int i;
  int rnddata [OUTPUTSIZE+1] = randomdata(OUTPUTSIZE);
  for (i = 0; i <= OUTPUTSIZE; ++i) {
    printf("%X",rnddata[i]);
  }
exit(0);
}
