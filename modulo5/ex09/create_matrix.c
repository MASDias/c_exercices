#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int** create_matrix(int y, int k){
	int** matrix;
	matrix = (int**)malloc(y*k*sizeof(int**));
	
	return matrix;
}
