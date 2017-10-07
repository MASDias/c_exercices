#include <stdio.h>
#include "sumEvens.h"

int main (void){
	int vec[21];
	int sum = 0;
	int i;
	printf("How many integer to insert? (max: 20)\n");
	scanf("%d", vec);//indica quantas posiçções o vetor vai ter, esse numero sera guardado na primeira posição corresponde a posição [0]
	for (i = 1; i <= *(vec+0) ; i++){//ciclo começa em 1 para nao incluir posição [0] que indica quantas posições tem o vetor
		printf("Insert number %d:",i);
		scanf("%d", (vec+i));//Inserção de valores para verificação se sao pares para a soma
	}
	sum = sum_evens(vec);// invocar metodo para soma de pares, returnando o numero interio correspondente a essa mesma soma
	printf("\nSum of even numbers is: %d\n", sum);
	return 0;
}
