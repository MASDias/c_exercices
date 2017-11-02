#include <stdio.h>
#include "searcher.h"

short int x = 3;
int num = 5;
short int array[] = {1,2,3,0,5};
short int *ptr = array;
short* result = 0;
int main(void){
	int i;
	result = vec_search();
	
	printf("\nVector:{");
	for (i = 0; i < num; i++)
	{
		printf("%d%s", array[i], i<=3 ? ", " : "");
	}
	printf("}\n");
	printf("Selected number: %d", x);
	printf("\nExpected Result: %p", &array[2]);
	
	printf("\nResult: %p\n", result);
	
	return 0;
}
