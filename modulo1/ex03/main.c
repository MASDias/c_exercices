#include <stdio.h>
#include "evenElements.h"

int main(void){
	const int SIZE = 10;//tamanho do vetor "values"
	int values[] = {1,2,3,4,5,6,7,8,9,10,11};//vetor para teste se tem pares ou nao
	even_elements(values, SIZE);//invoção da função que verifica quais os numeros pares num vetor
	return 0;
}
