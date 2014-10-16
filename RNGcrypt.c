#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define OUTPUTSIZE 1024
int rnd [OUTPUTSIZE+1];
int* randomdata (int size) {
  int i;
  for(i = 0; i <= size; ++i) {
    rnd[i] = rand();
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
    char x;
    else if (fread(&x,1,1,fp) <= 0) {
      perror("read file");
      exit(EXIT_FAILURE);
  }
  int rnddata [OUTPUTSIZE+1]; 
  randomdata(OUTPUTSIZE);
  int i;
  for (i = 0; i <= OUTPUTSIZE; ++i) {
    printf("%X",rnd[i]);
  }
exit(0);
}
