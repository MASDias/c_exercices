#include <stdio.h>
#include "findWords.h"

int main(void){
	int i;
	int j;
	int size = 0;
	char* addrs[51];//vetor que vai guardar endereços de palavras encontradas em "str1"
	char str1[] = "When life gives you lemons sell those lemons on ebay";//string que vai ser feita procura
	char word1[] = "lemons";//palavra a ser procurada em "str1"
	
	find_all_words(str1, word1, addrs);//funcao que vai verificar se encontrou endereços
	
	for (i = 0; addrs[i] != '\0'; i++){
		size++;//verifica tamanho de endereços guardados
	}
	
	printf("\nSentence: %s", str1);
	printf("\nWord: %s\n", word1);
	printf("\nSaved Addresses: {");
	for (j = 0; j < size; j++){
		printf("%p%s", addrs[j], (j<(size-1)) ? ", " : "");
	}
	printf("}\n\n");
	return 0;
}
