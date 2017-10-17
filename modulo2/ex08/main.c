#include <stdio.h>
#include "sumDiferentBits.h"
char a = 10;
short b = 7;
int c = 31;
int d = 14;
int main(void){
	printf("Resultado (long long): %llu\n", (long long)sumDiferentBits());
	printf("Resultado: %d\n", sumDiferentBits());
	return 0;
}
