#include <stdio.h>
#include "strCopy.h"
char* ptr1;
char* ptr2;
int main(void){
	
	char str1[100] = "bou ali e ja benho";
	char str2[100];
	
	ptr1 = str1;
	ptr2 = str2;
	
	str_copy_p();
	
	printf("\n%s",ptr2);
	return 0;
}
