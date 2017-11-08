#include <stdio.h>
#include "square.h"

int main(void){
	
	int x = 5;
	int result = 0;
	
	printf("\nx = %d", x);
	
	result = square(x);
	
	printf("\nResult: %d^2 = %d\n\n", x, result);
	return 0;	
}
