#include <stdio.h>
#include "strCopy2.h"
char* ptr1;
char* ptr2;
int main(void){
	
	char str1[100] = "bou ali e ja benho, ouviste ?";
	char str2[100];
	
	ptr1 = str1;
	ptr2 = str2;
	
	str_copy_p2();
	printf("\nPrevious sentence: %s", ptr1);
	printf("\nNew sentence: %s\n",ptr2);
	return 0;
}
