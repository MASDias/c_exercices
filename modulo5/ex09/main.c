#include <stdio.h>
#include "create_matrix.h"
	
int main(void){
	
	int y = 5;
	int k = 3;
	
	printf("\nAddress of created matrix: %p\n\n", create_matrix(y,k));
	
	return 0;
}
