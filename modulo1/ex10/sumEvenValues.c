#include <stdio.h>

int sumEvenValues(int* vec){
	int sum = 0;
	int i = 0;
	int total = *(vec+i);
	//assumindo que "even" sao os numeros pares
	for (i = 1; i <= total; i++){
		if (*(vec+i) % 2 == 0){
				sum += *(vec+i);
		}
	}
	
	return sum;
}
	
