#include <stdio.h>

void capitalize_words(char* values){
	int i;
	for (i = 0; *(values + i) != '\0'; i++){//ciclo ate ao sim da string
		while(*(values + i) == ' '){// verifica se a frase tem espaços multiplos
			i++;//se tiver espaços multiplos faz incrementos em "i" ate encontrar a proxima letra
		}
		if(*(values + (i-1)) == ' ' && *(values + i) >= 'a' && *(values + i) <= 'z'){//verifica se a letra que encontrou é minuscula e é a primeira da palavra
			*(values + i) -= 32;//muda a letra minuscula para a sua letra maiuscula correspondente
		}
	}
}
