#include <stdio.h>
#include "calculator.h"
int a =  0, b = 0;
int operator  = 0;
int main(void){
	printf("Insert first operand: ");
	scanf("%d", &a); 
	printf("Sum(1) | Subtraction(2) | Multiplication(3) | Division(4) | Modulus(5)\n");
	printf("Insert operator: ");
	scanf("%d", &operator);
	if (operator == 5){
		printf("Result = %d\n",calculator());	
	}else{
		printf("Insert second operand: ");
		scanf("%d", &b); 
		printf("Result = %d\n",calculator());
	}
	return 0;
}
