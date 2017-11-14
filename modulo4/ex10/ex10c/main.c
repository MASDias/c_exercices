#include <stdio.h>
#include "countBitsVec.h"

int main(void){
	int a[]={10,10,10};
	int num=3;
	int result = countBitsVec(a,num);
	printf("The number of zero bits in number is -> %d\n", result);
	return 0;
}
