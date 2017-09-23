#include <stdio.h>
#include "convert.h"

void fill_vector(char *vec){
	char number[10] = "";
	int i;
	
	printf("Insert 30 numbers\n");
	for (i = 0; i < 30; i++)
	{
		scanf("%s", number);
		vec[i] = string_to_int(number);
	}
	
	
}
