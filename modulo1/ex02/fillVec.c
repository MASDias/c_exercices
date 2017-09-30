#include <stdio.h>
#include "fillVec.h"

void fill_vec(int* vec, int n){
	
	int i;
	
	for (i = 0; i < n; i++)
	{
		printf("Insert number for vec[%d]: ", i);
		scanf("%d", vec + i); 
	}
	
	printf("\nYour vector: \n");
	printf("{");
	i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d%s", vec[i], (i != 19 ? ", " : ""));
	}
	
	printf("}\n");
	
}
