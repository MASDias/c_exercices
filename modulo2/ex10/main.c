#include <stdio.h>
#include <limits.h>
#include "sumIntValuesCarry.h"
unsigned int a = INT_MAX;
unsigned int b = 4;
int main(void){
	printf("Result of the sum of %d + %d = %d %s\n",a,b,sumIntValuesCarry() ,(sumIntValuesCarry()==-1)?"Overflow":"");
	a = INT_MIN;
	b = -1;
	printf("Result of the sum of %d + %d = %d %s\n",a,b,sumIntValuesCarry(),(sumIntValuesCarry()==-1)?"Overflow":"");
	a = 12;
	b = 23;
	printf("Result of the sum of %d + %d = %d %s\n",a,b,sumIntValuesCarry(),(sumIntValuesCarry()==-1)?"Overflow":"");
	return 0;
}
