#include <stdio.h>
#include "sumDiferentBits.h"
char a = 10;
short b = 7;
int c = 10;
int d = 14;
int main(void){
	printf("10 + 7 - 10 + 14 = ");
	printf("(long long) %llu\n", (long long)sumDiferentBits());
	printf("10 + 7 - 10 + 14 = ");
	printf("%d\n", sumDiferentBits());
	return 0;
}
