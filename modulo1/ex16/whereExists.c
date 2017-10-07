#include <stdio.h>

char* where_exists(char* str1, char* str2){
	int i = 0;
	int j = 0;
	while(*(str2 + i) != '\0'){
		//O apontador start aponta para a posição atual na str2.
		char* start = str2 + i;
		
		//Se o primeiro char da str1 for equivalente ao char que está a ser apontado na str2, vai continuar a verificar até ao fim da str1.
		while(*(str2 + i) == *(str1 + j) && *(str2 + i) != '\0' && *(str1 + j) != '\0'){
			i++;
			j++;
		}
		//Se o apontador da str1 estiver a apontar para o final da str1, significa que j foi incrementado o suficiente para que a str1 exista na str2, devolvendo a posição guardada pelo apontador 'start'.
		if(*(str1 + j) == '\0'){
			return start;
		}
		//Incrementa o apontador da str2.
		i++;
	}
	//Se o ciclo while acabou significa que a str1 não existe em str2, portanto, é devolvido null.
	return NULL;
}
