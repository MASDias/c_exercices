#include <stdio.h>
#include "wordFinder.h"

void find_all_words(char* str, char* word, char** addrs){
	
	int i = 0;
	int j = 0;
	int size = wordSize(word);
	char* initial_addr = &str[0];
	char* wordAddr;
	
	for (; str[i] != '\0'; i++)
	{
		wordAddr = find_word(str, word, initial_addr);
		if(wordAddr != NULL){
			addrs[j] = wordAddr;
			initial_addr = wordAddr + size;
			j++;
		}
	}
	
	addrs[j] = '\0';
}
