#include <stdio.h>
#include <stdlib.h>
int** sum_matrix(int** matrix1, int** matrix2, int k, int y){
	int i=0,j=0;
	int** result = (int**)malloc(y*sizeof(int*));
	if(result == NULL ){
		printf("Error reserving memory .\n " ); 
		exit(1);
	}
	
	result[0] = (int*)malloc(y*k*sizeof(int));
	if(result[0] == NULL ){
		printf("Error reserving memory.\n " ); 
		exit(1);
	}
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

