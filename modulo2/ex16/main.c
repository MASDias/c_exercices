#include <stdio.h>
#include "sumNValues.h"
int a = 4,b = 2;
int main(void){
	int result = sumNValues();
	printf("The result of the sum i* (%d / %d) = %d\n%s",a,b,result,(result == 0)?"Overflow\n":"");
	return 0;
}
