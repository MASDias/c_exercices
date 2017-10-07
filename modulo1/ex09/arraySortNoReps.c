#include <stdio.h>
#include "arraySort.h"

int arraySortNoReps(int* vec, int n, int* dest){
	int total = 0;
	int i;

	arraySort(vec,n);
	
	for(i = 0; i < n; i++){
		//Guarda no vetor destino o primeiro valor de vec.
		if(i == 0) {
			dest[total] = vec[i];
			total++;
		} else {
			//Se valor não é igual ao do destino, portanto, guarda no destino e incrementa o tamanho.
			if (vec[i] != dest[total-1]) {
				dest[total] = vec[i];
				total++;
			}
		}
	}
	return total; 
}
