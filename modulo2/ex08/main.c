#include <stdio.h>
#include "sumDiferentBits.h"
#include <limits.h>
char a = 255;
short b = 0;
int c = 0;
int d = 4294967295;
int main(void){
	printf("%d + %d - %d + %d = ",a,b,c,d);
	printf("%llu\n", sumDiferentBits());

	return 0;
}
