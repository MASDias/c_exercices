#include <stdio.h>

int arraySortNoReps(int* vec, int n, int* dest){
	int total = 0;
	int i,j;
	int temp;
	for (i = 0; i < n; ++i){
		for (j = i + 1; j < n; ++j){
			if (vec[i] > vec[j]) {
				temp =  vec[i];
				vec[i] = vec[j];
				vec[j] = temp;
			}
		}
	}
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
