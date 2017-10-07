#include <stdio.h>
#include "fillVec.h"

void fill_vec(int* vec, int n){
	int i; //valor i para incrementar 
	for (i = 0; i < n; i++){
		printf("Insert number for vec[%d]: ", i);
		scanf("%d", vec + i); //Leitura de numero
	}
}
