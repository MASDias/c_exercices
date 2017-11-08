#include <stdio.h>
#include "greater.h"

int main(void){
	
	int a = 7, b = 9, c = 5;
	
	printf("\na = %d | b = %d | c = %d", a, b, c);
	
	int result = greater(a, b, c);
	
	printf("\nBiggest: %d\n\n", result);
	return 0;	
}
