#include <stdio.h>
#include "wordFinder.h"

int main(void){
	char str1[] = "When life gives you lemons sell them on ebay";//String onde vai-se procurar determinada palavra("word")
	char word1[] = "lemons";//palavra a ser procurada
	char* initial_addr1 = &str1[3];//endereço para iniciar a procura
	char* final_addr1;//endereço onde vai ser guardado o endereço de "word1" em "str1"
	char str2[] = "When life gives you lemons throw them at the people you hate";
	char word2[] = "hate";
	char* initial_addr2 = &str2[30];
	char* final_addr2;
	
	final_addr1 = find_word(str1, word1, initial_addr1);
	printf("\nStarting point in the str: %s", initial_addr1);
	printf("\nAddress of first letter of 'lemons': %p", &str1[20]);
	printf("\nIt should return address of 'l'emons: %p\n", final_addr1);
	final_addr2 = find_word(str2, word2, initial_addr2);
	printf("\nStarting point in the str: %s", initial_addr2);
	printf("\nAddress of first letter of 'hate': %p", &str2[56]);
	printf("\nIt should return address of 'h'ate: %p\n", final_addr2);
	return 0;
}
