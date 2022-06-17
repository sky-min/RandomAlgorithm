#include <stdio.h>
#include <math.h>

uint64_t state[2] = {0xffff, 0xffffffff};

uint64_t randomMethod(){
	uint64_t s1 = state[0];
	uint64_t s0 = state[1];
	state[0] = s0;
	s1 ^= s1 << 23;
	s1 ^= s1 >> 17;
	s1 ^= s0;
	state[1] = s1;
	return s0 + s1;
}

int main(){
	int loop;
	scanf("%d", &loop);
	for(int i = 0; i < loop; i++){
		printf("%d: %lu\n", i + 1, randomMethod());
	}
	return 0;
}