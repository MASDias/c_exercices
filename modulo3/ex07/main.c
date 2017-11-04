#include <stdio.h>
#include "decrypt.h"
char str[] = "This is a test";
char* ptr1 = str;
int main(void){
	printf("Original: \"%s\"\n",str);
	int nd = decrypt(); 
	printf("After encrypt and decrypt: \"%s\" \nTotal changes: %d\n",str,nd);
	return 0;
}

