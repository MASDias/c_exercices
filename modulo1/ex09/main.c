#include <stdio.h>
#include "arraySortNoReps.h"

int main (void){
	
	int vec[] = {3,5,2,1,6,8,4,3,2};
	int dest[51];
	int n = 9;
	int size;
	int i = 0;
	
	printf("Removing repeated values \n\n");
	printf("Original Array: \n{");
	for (i = 0; i < n; ++i){
        printf("%d%s",vec[i], i < n-1 ? ", " : "");
	}
	printf("}\n");
	
	size = arraySortNoReps(&vec[0], n, &dest[0]); 
	
	printf("\nNew integer array (no Reps)\n{");
	for (i = 0; i < size; ++i){
		printf("%d%s",dest[i], i < size-1 ? ", " : "");
	}
	printf("}\n");
	return 0;
}
