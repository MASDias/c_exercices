#include <stdio.h>
#include <limits.h>
#include "sumIntValuesCarry.h"
int a = INT_MAX;
int b = 4;
int main(void){
	printf("Result of the sum of %d + %d = %d %s\n",a,b,sumIntValuesCarry() ,(sumIntValuesCarry()==-1)?"Overflow":"");
	a = 123;
	b = 34;
	printf("Result of the sum of %d + %d = %d %s\n",a,b,sumIntValuesCarry(),(sumIntValuesCarry()==-1)?"Overflow":"");
	a = 1;
	b = 1;
	printf("Result of the sum of %d + %d = %d %s\n",a,b,sumIntValuesCarry(),(sumIntValuesCarry()==-1)?"Overflow":"");
	return 0;
}
