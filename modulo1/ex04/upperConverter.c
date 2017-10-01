#include <stdio.h>

void convert_to_upper(char* str){
	
	int i;
	
	for (i = 0; str[i] != '\0'; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] = str[i] - 32;
		}
	}
	
	printf("\nConverted String: %s\n", str);
}
