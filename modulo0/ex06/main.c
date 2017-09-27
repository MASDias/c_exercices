#include <stdio.h>
#include "integer_fractional.h"

int main(void){
	
	char x[100];
	int x_int = 0;
	int x_frac = 0;
	
	printf("Enter a number\n");
	scanf("%s", x);

	x_int = integer_part(x);
	x_frac = fractional_part(x);

	printf("Integer Part: %d\n", x_int);
	printf("Fractional Part: %d\n", x_frac);
	return 0;	
}
