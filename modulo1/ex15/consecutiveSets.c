#include <stdio.h>
#include <stdlib.h> // conflitos na compilação com o rand() tive que importar esta biblioteca 
#include <time.h>


int verificationSet(int* vec){
	if (*(vec-1) < *vec && *(vec+1) > *vec ){
		return 1;
	}
	return 0;
}

void incremental(int* vec, int* tSet){
	if (verificationSet(vec) == 1){
		*tSet+=1;
		printf("INC %d\n",*tSet+0);
	}
}

void populateVector(int* vec, int n){
	int i;

	srand(time(NULL)); // usa como referencia o tempo para poder gerar novos numeros aleatorios 
	for (i = 0; i < n; i++){
		do{
			*(vec+i) = rand()%100;
		} while (*(vec+i) > 20);
	}
	
}

void consecutiveSets(int* vec,int n){
	populateVector(vec,n);
	int i;
	printf("Populated Vector -> { ");
	for (i = 0; i < n; i++){
		printf("%d%s",*(vec+i),(i<n-1)?", ":" }\n");
	}
	int inc = 0;
	for (i = 1; i < n-1; i++){
		incremental(vec+i,&inc);
	}
	printf("MAIN %d\n",inc);
}
