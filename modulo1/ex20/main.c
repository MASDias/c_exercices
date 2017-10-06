#include <stdio.h>
#include "findWords.h"

int main(void){
	
	int i;
	int j;
	int size = 0;
	char* addrs[51];
	char str1[] = "When life gives you lemons sell those lemons on ebay";
	char word1[] = "lemons";
	//char str1[] = "are are are area are";
	//char word1[] = "are";
	find_all_words(str1, word1, addrs); 
	
	for (i = 0; addrs[i] != '\0'; i++)
	{
		size++;
	}
	
	printf("\nSentence: %s", str1);
	printf("\nWord: %s\n", word1);
	
	printf("\nSaved Addresses: {");
	for (j = 0; j < size; j++)
	{
		printf("%p%s", addrs[j], (j<(size-1)) ? ", " : "");
	}
	printf("}\n\n");
	
	return 0;
}
