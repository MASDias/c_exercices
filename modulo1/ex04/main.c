#include <stdio.h>
#include "upperConverter.h"

int main(void){
	
	char str[100];
	
	printf("Enter a String: ");
	scanf("%s", str);
	
	convert_to_upper(str);
	
	return 0;
}
