#include <stdio.h>
#include <limits.h>
#include "sumIntValues.h"
unsigned int a = 5;
unsigned int b = 1;
int main(void){
	printf("Se resultado = -1 Overflow\nSe resultado = -2 Carry\n");
	printf("Result of the sum of %d + %d = %d \n",a,b,sumIntValues());
	a = 6;
	b = 1;
	printf("Result of the sum of %d + %d = %d \n",a,b,sumIntValues());
	a = INT_MIN;
	b = INT_MIN;
	printf("Result of the sum of %d + %d = %d \n",a,b,sumIntValues());
	a = INT_MAX;
	b = 1;
	printf("Result of the sum of %d + %d = %d \n",a,b,sumIntValues());
	return 0;
}
