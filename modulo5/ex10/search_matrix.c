#include <stdio.h>

int search_matrix(int **m, int y, int k, int num){
	int i=0,j=0;
	for (i = 0; i < k; i++){
		for (j = 0; j < y; j++){
			if (**m+i+j==num){
				return 1;
			}
		}
	}
	return 0;
}

