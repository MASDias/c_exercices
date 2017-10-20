#include <stdio.h>
#include "operation.h"
int a = 2, b = 2, c = 10, d = 5;
int main(void){
	
	printf("\nOperation: A + (B * C) / D\n");
	printf("%d + (%d * %d) / %d\n", a, b, c, d);
	printf("Result: %d\n\n", operation());
	
	return 0;
}
