#include <stdio.h>
#include "isBinary.h"

int main(void){
	
	char number[100];
	
	printf("Insert a number\n");
	scanf(" %s", number);
	
	printf("%s!", finalDecision(number)); 
	
	return 0;
}
