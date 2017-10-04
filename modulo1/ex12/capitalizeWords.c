#include <stdio.h>

void capitalize_words(char* values){
	
	int i;
	for (i = 0; *(values + i) != '\0'; i++)
	{
		while(*(values + i) == ' '){
			i++;
		}
		
		if(*(values + (i-1)) == ' ' && *(values + i) >= 'a' && *(values + i) <= 'z'){
			*(values + i) -= 32;
		}
	}
	
}
