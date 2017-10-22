#include <stdio.h>
#include "calculator.h"
int a = 0, b = 0;
char operator;
int main(void){
	printf("\nInsert first operand: ");
	scanf("%d[^\n]", &a); 
	printf("\nSum(+) | Subtraction(-) | Multiplication(x) | Division(/) | Modulus(m)\n");
	printf("\nInsert operator: ");
	scanf("%c", &operator);
	printf("Insert second operand: ");
	scanf("%d", &b);
	
	printf("%d %c %d", a,operator,b);
	return 0;
}
