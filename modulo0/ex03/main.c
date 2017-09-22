#include <stdio.h>
#include "average.h"

int main(void){
	
	char number1[10] = "";
	char number2[10] = "";
	
	printf("Insert 2 numbers\n");
	scanf("%s", number1);
	scanf("%s", number2);
	
	printf("Average: %.2f\n", average_two_numbers(number1,number2));
	
	return 0;
	
}
