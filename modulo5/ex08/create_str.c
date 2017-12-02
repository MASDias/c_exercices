#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* create_str(char str[80]){
	int tamanho = strlen(str);//obtenho tamanho da string
	char* new_char=str; //faço a copia por inteiro de uma nova string
	new_char = (char*) malloc(tamanho+1); //faço um alocamento de memoria de tamanho + 1, pois tem que se ter em conta o /0 da string 
	return new_char;
}
