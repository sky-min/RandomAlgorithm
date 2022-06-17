#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdint.h>

const int M = pow(2, 32);
const int A = 22695477;
const int C = 1;

uint64_t rnum = time(NULL); //seed

uint64_t randomMethod(){
	rnum = (rnum * A + C) % M;
	return rnum;
}

int main(){
	int loop;
	scanf("%d", &loop);
	for(int i = 0; i < loop; i++){
		printf("%d: %lu\n", i, randomMethod());
	}
}