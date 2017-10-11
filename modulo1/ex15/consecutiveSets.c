#include <stdio.h>
#include <stdlib.h> // conflitos na compilação com o rand() tive que importar esta biblioteca 
#include <time.h>

void populateVector(int* vec, int n){
	int i;
	srand(time(NULL)); // usa como referencia o tempo para poder gerar novos numeros aleatorios 
	for (i = 0; i < n; i++){
		do{
			*(vec+i) = rand()%100;
		} while (*(vec+i) > 20);
	}	
}

int verificationSet(int* vec){
	if (*(vec-1) < *(vec) && *(vec+1) > *vec ){
		return 1;
	}
	return 0;
}

void incremental(int* vec, int* tSet){
	int check = verificationSet(vec);
	if (check == 1){
		*tSet+=1;
	}
}


void consecutiveSets(int* vec,int n){
	populateVector(vec,n);
	int inc = 0;
	int i;
	for (i = 1; i < n-1; i++){
		incremental(vec+i,&inc);
	}
}
