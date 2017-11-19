#include <stdio.h>
#include "rotate.h"

int main(void){
	
	int num = 5;
	int nBits = 2;
	
	printf("\nNum = %d", num);
	
	printf("\nNumber of shifts = %d", nBits);
	
	printf("\nRotating to the left = %d", rotate_left(num, nBits));
	
	printf("\nRotating to the right = %d\n", rotate_right(num, nBits));
	
	return 0;
}
