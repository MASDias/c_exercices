#include <stdio.h>
#include "isMultiple.h"
int a = 30, b = 15;
int main (void){
	printf("Is %d, a multiple os %d? %s\n",b,a,(isMultiple() != 0)?"Is a not a multiple":"It is a multiple");
	return 0;
}
