#include <stdio.h>
#include "arraySort.c"
int arraySortNoReps(int* vec, int n, int* dest){
	int total = 0;
	int i;

	arraySort(vec,n);
	
	for(i=0; i<n; i++){
		if(i == 0) {
			dest[total] = vec[i];
			total++;
		} else {
			if (vec[i] == dest[total-1]) {
				
			}else {
				dest[total] = vec[i];
				total++;
			}
		}
	}
	return total; 
}
