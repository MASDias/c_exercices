#include <stdio.h>
#include <limits.h>


int string_to_int(char *str){
	
	int index = 0;
	int result = 0;
	int startingPosition = 0;
	int sign = 0;
	
	if(str[0] == '-'){
		sign = -1;
	}
	
	if(sign == -1){
		startingPosition = 1;
	}else{
		startingPosition = 0;
	}
	
	
	/* 
	   Seguindo a tabela ASCII:
	   0 x 10 + 49 - 48 = 1
	   1 x 10 + 50 - 48 = 12
	   12 x 10 + 51 - 48 = 123
	   123 x 10 + 52 - 48 = 1234
	   1234 x 10 +53 -48 = 12345 
	*/ 
	   
	for(index = startingPosition; str[index] !=  '\0'; index++){
		result = result * 10 + str[index] - '0';
	}
	
	if(sign == -1){
		result = -result;
	}
	
	return result;
	
}
	



