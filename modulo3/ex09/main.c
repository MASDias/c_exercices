#include <stdio.h>
#include "searcher.h"

short int x = 0;
int num = 5;
short int array[] = {1,2,3,0,5};
short int *ptr = array;
short* result = 0;
int main(void){
	
	result = vec_search();
	
	
	
	
	printf("\nResult: %p\n", result);
	
	return 0;
}
