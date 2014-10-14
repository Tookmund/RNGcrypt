#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define OUTPUTSIZE 1024

char[OUTPUTSIZE+2] randomdata (int size) {
  int i;
  char[OUTPUTSIZE+2] rnd;
  for(i = 0; i <= 100; ++i) {
    rnd[i] = (char)rand();
  }
  return rnd;
}
int main (char* argv, int argc) {
  srand(time(NULL));
  if (argc < 1) {
    printf("%s -f filename or %s text",argv[0],argv[0]);
    exit(0);
  }
  else {
    printf("%s",randomdata(OUTPUTSIZE));
  }
  return 0;
