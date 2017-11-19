#include <stdio.h>
#include "activateBit.h"

int main(void){
	int n = 167;
	int* ptr = &n;
	int num =4;  
	printf("%d", activateBit(ptr,num));
	return 0;
}
