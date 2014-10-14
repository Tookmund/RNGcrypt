#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char[102] randomdata (int size) {
  int i;
  char[102] rnd;
  for(i = 0; i <= 100; ++i) {
    rnd[i] = (char)rand() % 200; 
    /* 
    Not skewed as GCC RAND_MAX is divisible by 200 
    if not using GCC check on RAND_MAX
    Maybe I will fix this to not depend on GCC
    */
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
    printf("%s",randomdata(100));
  }
  return 0;
