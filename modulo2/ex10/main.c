#include <stdio.h>
#include <limits.h>
#include "sumIntValuesCarry.h"
int a = INT_MAX;
int b = 4;
int main(void){
	printf("Result of the sum of 4294967296 + 4 = %llu\n",(long long) sumIntValuesCarry());
	return 0;
}
