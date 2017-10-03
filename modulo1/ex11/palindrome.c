#include <stdio.h>

int InvalidChars(char str){
	if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z')){
		return 1;
	} 
	return 0;
}

int strSize(char* str){
	int size = 0;
	int i;
	for (i = 0; *(str+i) != '\0'; i++){
		size++;
	}
	return size;	
}

int palindrome(char* str){
	int i = 0;
	int size = strSize(str);
	int j = size-2;
	if (size == 2){
		return 1;
	}
	while (i < j){
		printf("\n%c",*(str+i));
		printf("%c",*(str+j));
		
		if (*(str+i) == *(str+j)){
			i++;
			j--;	
		}else{
			return 0;
		}
		while (InvalidChars(*(str+i)) == 0){
			i++;
		}
		while (InvalidChars(*(str+j)) == 0){
			j--;
		}	
	}	
	if (i>=j){
			return 1;
	}
	
	return 0;
}

