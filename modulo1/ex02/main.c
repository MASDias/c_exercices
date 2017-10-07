#include <stdio.h>
#include "fillVec.h"

int main(void){
	const int SIZE = 20;
	int vec[SIZE];
	int i;
	fill_vec(vec, SIZE);
	printf("\nYour vector: \n");
	printf("{");
	for (i = 0; i < SIZE; i++){
		printf("%d%s", vec[i], (i < SIZE-1 ? ", " : ""));//condição serve para escrever uma virgula ou nao dependendo da posição do vetor
	}
	printf("}\n");
	return 0;
}
