#include <stdio.h>

void even_elements(int* vec, int n){
	
	int i;
	
	printf("Even numbers in the array:\n");
	printf("{ ");
	for (i = 0; i < n; i++)
	{
		if(((*(vec + i)) % 2) == 0){
			printf("%d ", *(vec + i));
		}
	}
	printf("}\n");
}
