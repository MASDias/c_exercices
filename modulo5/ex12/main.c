#include <stdio.h>
#include <stdlib.h>
#include "sum_matrix.h"
#define L 3
#define C 3
int main(void){
	int vec1 []= {1,2,3,4,5,6,7,8,9};
	int i=0,j=0;
	int** matrix1 = (int**)malloc(L*sizeof(int*));
	if(matrix1 == NULL ){
		printf("Error reserving memory.\n " ); 
		exit (1);
	}
	matrix1[0] = (int*)malloc(L*C*sizeof(int));
	if(matrix1[0] == NULL ){
		printf("Error reserving memory.\n " ); 
		exit (1);
	}
	for (i = 1; i < L; i++){
		matrix1[i] = matrix1[0]+i*C; 
	}
	
	int vec2 [] = {3,3,5,2,1,1,5,4,1};
	int** matrix2 = (int**)malloc(L*sizeof(int*));
	if(matrix2 == NULL ){
		printf(" Error reserving memory.\n " ); 
		exit (1);
	}
	
	matrix2[0] = (int*)malloc(L*C*sizeof(int));
	if(matrix2[0] == NULL ){
		printf(" Error reserving memory.\n " ); 
		exit (1);
	}
	for (i = 1; i < L; i++){
		matrix2[i] = matrix2[0]+i*C; 
	}
	int posicaoVec = 0;
	for (i = 0; i < L; i++){
		for (j = 0; j < C; j++){
			matrix1[i][j] = vec1[posicaoVec];
			matrix2[i][j] = vec2[posicaoVec];
			posicaoVec++;
		}
	}
	
	int** result = sum_matrix(matrix1,matrix2,C,L);
	for (i = 0; i < L; i++){
		for (j = 0; j < C; j++){
			printf("result[%d][%d] = %d\n",i,j,result[i][j]);
		}
	}
	printf("Address of new matrix: %p\n",result);
	free(result[0]);
	free(result);
	free(matrix1[0]);
	free(matrix1);
	free(matrix2[0]);
	free(matrix2);
	
	return 0;
}
