#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdint.h>

int M;
const int A = 22695477;
const int C = 1;

uint64_t rnum; //seed

uint64_t randomMethod(){
	rnum = (rnum * A + C) % M;
	return rnum;
}

int main(){
  M = pow(2, 32);
  rnum = time(NULL);
	int loop;
	scanf("%d", &loop);
	for(int i = 0; i < loop; i++){
		printf("%d: %lu\n", i, randomMethod());
	}
}
