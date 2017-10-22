#include <stdio.h>
#include <limits.h>
#include "sumIntValuesCarry.h"
signed int a = INT_MAX;
signed int b = 1;
int main(void){
	signed int result = sumIntValuesCarry();
	printf("Result of the sum of %d + %d = %d %s\n",a,b,result  ,(result ==-1)?"Overflow":"");
	return 0;
}
