#include <stdio.h>
#include "countBits.h"

int main(void){
	int a=10;
	int result = countBits(a);
	printf("The number of zero bits in number %d is -> %d\n",a, result);
	return 0;
}
