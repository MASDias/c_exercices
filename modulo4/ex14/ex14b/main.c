#include <stdio.h>
#include "jointBits.h"

int main(void){
	int num1 = 19081;   //binario = 0100 1010 1000 1001
	int num2 = 29871;   //binario = 0111 0100 1010 1111
						//resultado 0111 0100 1000 1001
	int num =8;  
	printf("%d", jointBits(num1,num2,num));
	return 0;
}
