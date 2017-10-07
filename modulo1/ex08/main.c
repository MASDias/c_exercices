#include <stdio.h>
#include "arraySortPointer.h"

int main (void){
	int vec[] = {3,5,2,1,6,8,4,3,2};
	int n = 9;
	int i;	

	printf("\nOrdering an integer array:\n\n");
	printf("Original Array: \n{");
	for (i = 0; i < n; ++i){
        printf("%d%s",vec[i], i < n-1 ? ", " : "");
	}
	printf("}\n");
	
	arraySortPointer(&vec[0],n);
	
	printf("Integer array ordered (Ascending order)\n{");
	for (i = 0; i < n; ++i){
        printf("%d%s",vec[i], i < n-1 ? ", " : "");
	}
	printf("}\n\n");
	return 0 ;
}
