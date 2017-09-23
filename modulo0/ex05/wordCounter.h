#include <stdio.h>

int count_words(char *str){
		
	int wordCounter = 1;
	int i;
	
	for (i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' '){
			wordCounter++;
		}
	}
	
	return wordCounter;
	
}
