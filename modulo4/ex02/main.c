#include <stdio.h>
#include "sumN.h"

int main(void){
	int n = 4;
	int sum = sumN(n);
	printf("The sum of %d numbers is: %d\n",n,sum);
	return 0;
}
