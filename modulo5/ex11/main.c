#include <stdio.h>
#include <stdlib.h>
#include "count_even_matrix.h"
#define L 3
#define C 3
int main(void){
	
	int i=0,j=0;
	int vec1 []= {1,2,3,4,5,6,7,8,9};
	
	int** m = (int**)malloc(L*sizeof(int*));
	if(m == NULL ){
		printf("Error reserving memory.\n " ); 
		exit (1);
	}
	m[0] = (int*)malloc(L*C*sizeof(int));
	if(m[0] == NULL ){
		printf("Error reserving memory.\n " ); 
		exit (1);
	}
	for (i = 1; i < L; i++){
		m[i] = m[0]+i*C; 
	}
	
	//incializar os valores da matriz do vetor vec1[]
	int posicaoVec = 0;//contador para percorrer os valores do vetor, de 0 a 9
	for (i = 0; i < L; i++){
		for (j = 0; j < C; j++){
			m[i][j] = vec1[posicaoVec];
			posicaoVec++;
		}
	}
	
	for (i = 0; i < L; i++){
		for (j = 0; j < C; j++){
			printf("m[%d][%d] = %d\n",i,j,m[i][j]);
		}
	}
	
	printf("\nNumber of even elements in the matrix: %d\n\n", count_even_matrix(&m[L], L, C));

	return 0;
}
