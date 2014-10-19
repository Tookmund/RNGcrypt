#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <limits.h>

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
	 //printf("%d\n",argc);
	 if (argc < 2) {
		printf("%s -f filename or %s text\n",argv[0],argv[0]);
		exit(0);
	}
	if (strcmp(argv[1],"-f") == 0) {
		FILE* fp = fopen(argv[2],"r");
		char x;
		if (fp == NULL) {
			perror(argv[2]);
			exit(EXIT_FAILURE);
		}
		else if (fread(&x,1,1,fp) <= 0) {
			perror("read file");
			exit(EXIT_FAILURE);
		}
		else {
			char *rngc = ".rngc";
			char rngname [NAME_MAX + 1];
			strcpy(rngname,argv[2]);
			strcat(rngname,rngc);
			printf("%s\n",rngname);
			freopen(rngname,"w+",stdout);
		}
	}
	randomdata(OUTPUTSIZE);
	int i;
	for (i = 0; i <= OUTPUTSIZE; ++i) {
		printf("%X",rnd[i]);
	}
	printf("\n");
	return(0);
}
