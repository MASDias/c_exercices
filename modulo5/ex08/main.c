#include <stdio.h>
#include "create_str.h"
#include <stdlib.h>
int main(void){
	char str1 [80] = "Isto e um teste";
	char*result = create_str(str1);
	printf("Address of original: %p\n", &str1);
	printf("Address of new string: %p\n", result);
	free(result);
	return 0;
}
