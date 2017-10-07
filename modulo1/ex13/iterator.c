#include <stdio.h>

int  iterator(char* str, char c, int* vec){
	int i;
	int j = 0;//tamanho final do vetor que guarda posições da letra encontrada na string "str"
	for (i = 0; *(str + i) != '\0'; i++){
		while(*(str + i) == ' '){//verificação de espaços multiplos
			i++;//se sim, incrementar "i"
		}
		if(*(str + i) == c){//caso encontre caracter escolhido
			*(vec + j) = i;//guarda posição da letra no vetor "vec"
			j++;//aumenta o tamanho do vetor "vec" que contem as posições
		}
	}
	return j;//devolve tamanho do vetor "vec"
}
