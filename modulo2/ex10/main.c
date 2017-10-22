#include <stdio.h>
#include <limits.h>
#include "sumIntValuesCarry.h"
unsigned int a = 5;
unsigned int b = 1;
int main(void){
	printf("Result of the sum of %d + %d = %d \n",a,b,sumIntValuesCarry());
	a = 6;
	b = 1;
	printf("Result of the sum of %d + %d = %d \n",a,b,sumIntValuesCarry());
	a = INT_MAX;
	b = INT_MIN;
	printf("Result of the sum of %d + %d = %d \n",a,b,sumIntValuesCarry());
	a = -1;
	b = 1;
	printf("Result of the sum of %d + %d = %d \n",a,b,sumIntValuesCarry());
	return 0;
}
