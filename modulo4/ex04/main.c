#include <stdio.h>
#include "subGreater.h"

int main(void){
	int num1 = 56;
	int num2 = 55;
	int s = num1;
	int* smaller = &s;
	int sub = subGreater(num1,num2,smaller);
	printf("%d - %d = %d\n",num1,num2, sub);
	printf("Numero 1 %p Numero 2 %p \n",&num1,&num2);
	
	printf("%p %d\n",smaller,*smaller);
	return 0;
}
