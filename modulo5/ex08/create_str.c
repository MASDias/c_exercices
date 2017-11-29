#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* create_str(char str[80]){
	int tamanho = strlen(str);
	char* new_char=str; 
	new_char = (char*) malloc(tamanho+1);
	
	return new_char;
}
