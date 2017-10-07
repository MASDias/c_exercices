#include <stdio.h>

void powerRef(int* x, int y){
	
	int i;
	int base = *x;
	
	//multiplica x por si próprio i vezes até i chegar ao valor do expoente. 
	for(i = 1; i < y; i++){
		*x = *x*(base);
	}
}
