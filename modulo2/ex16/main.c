#include <stdio.h>
#include "sumNValues.h"
int a = 1,b = 7;
int main(void){
	int result = sumNValues();
	printf("The result of the sum i* (%d / %d) = %d\n",a,b,result);
	return 0;
}
