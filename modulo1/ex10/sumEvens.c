#include <stdio.h>

int sum_evens(int* values){
	
	int length = values[0] + 1;
	int sum = 0;
	int i;
	for (i = 1; i < length; i++){
		if((*(values + i) % 2) == 0){ // verifica resto da divisao por dois para saber se numero e par
			sum += *(values + i);// se numero par, incrementa o seu resultado com o resultado obtido anteriormente
		}
	}
	
	return sum;
	
}
