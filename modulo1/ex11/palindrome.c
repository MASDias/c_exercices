#include <stdio.h>

//Verifica se caractere actual é válido.
int invalidChars(char str){
	if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z')){
		return 1;
	} 
	return 0;
}

//Devolve tamanho da string.
int strSize(char* str){
	int size = 0;
	int i;
	for (i = 0; *(str+i) != '\0'; i++){
		size++;
	}
	return size;	
}

int palindrome(char* str){
	int i = 0;
	int size = strSize(str);
	int j = size-2;
	
	//Verifica se a string tem pelo menos 1 caractere.
	if (size == 2){
		return 1;
	}
	//Percorre a string a partir do inicio e a partir do fim. Quando i se encontrar com j acaba o ciclo
	while (i < j){	
		//enquanto o elemento apontado pelo iterador que começa no inicio for igual ao elemento apontado pelo iterador que começa no fim for igual, a palavra é palindroma, senão retorna 0;
		if (*(str+i) == *(str+j)){
			i++;
			j--;	
		}else{
			return 0;
		}
		//Se forem encontrados caracteres inválidos, os iteradores saltam o respetivo caractere.
		while (invalidChars(*(str+i)) == 0){
			i++;
		}
		while (invalidChars(*(str+j)) == 0){
			j--;
		}	
	}	
	//Se o iterador inicial já ultrapassou o iterador que começa do fim, significa que a palavra é palindroma.
	if (i>=j){
			return 1;
	}
	
	return 0;
}

