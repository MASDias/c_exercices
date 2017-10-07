#include <stdio.h>
#include "sumEvens.h"

int main (void){
	int vec[] = {20,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int sum = 0;
	int i;
	
	printf("\nOriginal vector: \n{");
	for (i = 0; i < 21; i++)
	{
		printf("%d%s", vec[i], i < 20 ? ", " : "");
	}
	printf("}\n");
	sum = sum_evens(vec);// invocar metodo para soma de pares, returnando o numero inteiro correspondente a essa mesma soma
	printf("\nSum of even numbers: %d\n\n", sum);
	return 0;
}
