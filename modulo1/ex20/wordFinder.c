#include <stdio.h>

int wordSize(char* word){
	
	int i = 0;
	
	while(word[i] != '\0'){
		i++;
	}
	
	return i;
	
}

char* find_word(char* str, char* word, char* initial_addr){
	
	int j = 0;
	int i =0;
	int size = wordSize(word);
	
	while (str+i != initial_addr)
	{
		i++;
	}
	
	for (; str[i]!= '\0'; i++){
		if (word[j] == str[i]){
			int temp = i;
			while (word[j] == str[temp]){
				if (str[temp]=='\0')
				{
					break;
				}
				temp++;
				j++;
				
			}
			if (j == size){
				return str+i;
			}else{
				j = 0;
			}			
		}
	}
	
	return NULL;
}
