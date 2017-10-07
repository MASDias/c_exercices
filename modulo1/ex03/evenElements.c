#include <stdio.h>

void even_elements(int* vec, int n){
	int i;
	printf("Even numbers in the array:\n");
	printf("{");
	for (i = 0; i < n; i++){
		if((*(vec + i) % 2) == 0){// mod 2 = 0, verifica se resto de divisao por 2 é zero, se sim significa que o numero é par
			printf("%d%s", *(vec + i),(i<n-1)?", ":"");
		}
	}
	printf("}\n");
}
