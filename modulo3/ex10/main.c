#include <stdio.h>
#include "strCat.h"

char *ptr1;
char *ptr2;
char *ptr3;
int main(void){
	
	char str1[40] = "gosto de francesinha mas ";
	char str2[40] = "não gosto de favas";
	char str3[79];
	
	ptr1 = str1;
	ptr2 = str2;
	ptr3 = str3;
	
	str_cat();
	printf("\nString 1: %s", ptr1);
	printf("\nString 2: %s\n", ptr2);
	printf("\nConcatenated String: %s\n\n", ptr3);
	return 0;
}
