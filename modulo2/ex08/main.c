#include <stdio.h>
#include "sumDiferentBits.h"
char a = 10;
short b = 7;
int c = 10;
int d = 14;
int main(void){
	printf("%d + %d - %d + %d = ",a,b,c,d);
	printf("%llu\n", sumDiferentBits());

	return 0;
}
