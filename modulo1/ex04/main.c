#include <stdio.h>
#include "upperConverter.h"

int main(void){
	
	char str[] = "I only want uppercase letters in this sentence.";
	
	printf("\nOriginal String: %s\n", str);
	
	convert_to_upper(str);
	
	return 0;
}
