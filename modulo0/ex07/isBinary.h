#include <stdio.h>

int isBinary(char *number){
	
	int i;
	int flag = 1;
	
	for (i = 0; number[i] != '\0'; i++)
	{
		if(number[i] >= '0' && number[i] <= '1'){
			
		}else{flag=0;break;}
	}
	
	return flag;
}

int isOctal(char *number){
		
	int i;
	int flag = 1;
	
	for (i = 0; number[i] != '\0'; i++)
	{
		if(number[i] >= '0' && number[i] <= '7'){
		}else{flag = 0; break;}
	}
	
	return flag;
	
}

int isDecimal(char *number){
	
	int i;
	int flag = 1;
	
	for(i = 0; number[i] != '\0'; i++){
		if(number[i] >= '0' && number[i] <= '9'){
		}else{flag = 0; break;}
	}
	
	return flag;
}

int isHexa(char *number){
	
	int i;
	int flag = 1;
	
	for (i = 0; number[i] != '\0'; i++)
	{
		if((number[i] >= '0' && number[i] <= '9') || (number[i] >= 'A' && number[i] <= 'F') || (number[i] >= 'a' && number[i] <= 'f')){
		}else{flag = 0; break;}
	}
	
	return flag;
}

char* finalDecision(char *number){
	
	int flagBinary = 0;
	int flagOctal = 0;
	int flagDecimal = 0;
	int flagHexa = 0;
	
	flagBinary = isBinary(number);
	flagOctal = isOctal(number);
	flagDecimal = isDecimal(number);
	flagHexa = isHexa(number);
	
	if(flagBinary == 1){
		return "This number is Binary";
	}
	
	if(flagOctal == 1){
		return "This number is Octal";
	}	
	
	if(flagDecimal == 1){
		return "This number is Decimal";
	}
	
	if(flagHexa == 1){
		return "This number is Hexadecimal";
	}
	
	return "The number is none of the bases";
	
}
