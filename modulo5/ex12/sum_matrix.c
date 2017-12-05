#include <stdio.h>
#include <stdlib.h>
int** sum_matrix(int** matrix1, int** matrix2, int k, int y){
	int i=0,j=0;
	int** result = (int**)malloc(y*sizeof(int*));
	
	result[0] = (int*)malloc(y*k*sizeof(int));
	for (i = 1; i < y; i++){
		result[i] = result[0]+i*k; 
	}
	
	for (i = 0; i < k; i++){
		for (j = 0; j < y; j++){
			result[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
	return result;
}

