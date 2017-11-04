#include <stdio.h>
#include "encrypt.h"
char str[] = "This is a test";
char* ptr1 = str;
int main(void){
	printf("Original: \"%s\"\n",str);
	int n = encrypt();
	printf("New: \"%s\" Total changes: %d\n",ptr1, n); 
	return 0;
}
