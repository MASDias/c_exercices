#include <stdio.h>
#include <stdlib.h>
#include "search_matrix.h"
#define L 3
#define C 3
int main(void){
	
	int vec1 []= {1,2,3};
	int vec2 []= {7,8,9};
	int vec3 []= {3,5,4};
	
	int num = 5;	
	
	int** m = (int**) malloc(L * C * sizeof(int**));
	*m =vec1;
	m++; 
	*m =vec2;
	m++; 
	*m =vec3; 
	
	int result = search_matrix(m, L, C, num);
	
	if (result==1){
		printf("O numero %d, esta na matriz\n",num);
	}else{
		printf("O numero %d, não se encontra na matriz\n",num);
	}
	free(m);
	return 0;
}

