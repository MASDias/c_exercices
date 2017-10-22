#include <stdio.h>
#include "operation.h"
int op1=12, op2=2, res;
int main(void){
	
	res = operation();
	printf("\nop1 = %d\n", op1);
	printf("op2 = %d\n", op2);
	printf("\nOperation: (op1 - CONST) - (CONST - op2)\n");
	printf("(%d - 10) - (10 - %d)\n", op1, op2);
	printf("\nResultado = %d:0x%x\n", res,res);
	
	return 0;
}
