#include <stdio.h>
#include "sum.h"
int op1=0, op2=0,op3=0,res=0;
int main(void) {
	printf("Valor op1:");
	scanf("%d",&op1);
	printf("Valor op2:");
	scanf("%d",&op2);
	printf("Valor op3:");
	scanf("%d",&op3);
	res = sum();
	printf("sum = %d:0x%x\n", res,res);
	return 0;
}
