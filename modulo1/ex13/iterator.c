#include <stdio.h>

int  iterator(char* str, char c, int* vec){
	
	int i;
	int j = 0;
	int flag = 0;
	for (i = 0; *(str + i) != '\0'; i++){
		while(*(str + i) == ' '){
			i++;
		}
		if(*(str + i) == c){
			*(vec + j) = i+1;
			j++;
			flag = 1;
		}
	}
	if (flag == 0){
		j = 0;
	}
	
	return j;
	
}
