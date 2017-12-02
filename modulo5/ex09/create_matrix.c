#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int** create_matrix(int y, int k){
	int** matrix;
	matrix = (int**)malloc(y*k*sizeof(int**));  //alocamento de memória para a matriz YxK de que 4 bytes
	
	return matrix;
}
