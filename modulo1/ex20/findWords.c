#include <stdio.h>
#include "wordFinder.h"

void find_all_words(char* str, char* word, char** addrs){
	int i = 0;
	int j = 0;
	int size = wordSize(word);//tamanho da palavra a procurar
	char* initial_addr = &str[0];//endereço inicial de "str"
	char* wordAddr;
	for (; str[i] != '\0'; i++){
		wordAddr = find_word(str, word, initial_addr);//funçao para guardar o endereço caso encontre a palavra em "word"
		if(wordAddr != NULL){//caso encontre a palavra
			addrs[j] = wordAddr;//adiciona o endereço em "addrs[j]"
			initial_addr = wordAddr + size;//atualiza o endereço inicial para poder procurar a proxima palavra (caso exista) em "str"
			j++;//muda a posição de "addrs"
		}
	}
	addrs[j] = '\0';//determina o fim de "addrs"
}
