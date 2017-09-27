#include <stdio.h>
#include <string.h>
#include "convert.h"

int integer_part(char *ch){
	
	int i=0;
	char integerP[100];
	
	for (; ch[i] != '.' && ch[i] != '\0'; i++)
	{
		integerP[i] = ch[i];
	}
	
	integerP[i] = '\0';
	
	return string_to_int(integerP);
}

int fractional_part(char *ch){
	
	int i = 0;
	int j = 0;
	int start = 0;
	char fractionalP[100];
	
	for (; ch[i] != '.'; i++)
	{
		start++;
	}
	
	i = start + 1;
	
	printf("\n");
	for (; ch[i] != '\0' ; i++)
	{
		fractionalP[j] = ch[i];
		j++;
	}
	
	fractionalP[j] = '\0';
	
	return string_to_int(fractionalP);
}
