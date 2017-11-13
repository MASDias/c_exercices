#include <stdio.h>
#include "countOdd.h"

int main(void){
	
	int vec[] = {1,2,3,4,5,6,7};
	int n = 7;
	int *ptr = vec;
	int i;
	
	printf("\nVector:{");
	for (i = 0; i < n; i++)
	{
		printf("%d%s", vec[i], i <= n-2 ? ", " : "");
	}
	printf("}");
	
	int result = count_odd(ptr, n);
	
	printf("\nNumber of odd numbers: %d\n", result);
	
	return 0;	
}
