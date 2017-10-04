#include <stdio.h>

int  iterator(char* str, char c, int* vec){
	
	int i;
	int j = 0;
	
	for (i = 0; *(str + i) != '\0'; i++){
		while(*(str + i) == ' '){
			i++;
		}
		if(*(str + i) == c){
			*(vec + j) = i;
			j++;
		}
	}
	return j;
	
}
