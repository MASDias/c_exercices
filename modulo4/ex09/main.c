#include <stdio.h>
#include "calc.h"

int main(void){
	
	int a = 5;
	int b = 2;
	int c = 3;
	int *bptr = &b;

	printf("\nOperation: (%d - %d) * %d\n", b, a, c);

	int result = calc(a, bptr, c);
	
	printf("\nResult: %d\n", result);
	
	return 0;	
}
