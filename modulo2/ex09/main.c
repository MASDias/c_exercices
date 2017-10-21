#include <stdio.h>
#include "sumTwoInts.h"
#include <limits.h>
int op1 = INT_MAX;
int op2 = INT_MAX;
int main(void){
	printf("%d + %d = %llu\n",op1, op2, sum2Ints());
	return 0;
}
