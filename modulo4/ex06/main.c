#include <stdio.h>
#include "testEqual.h"

int main(void){
	printf("Test if String \"a\" and String \"b\" are equal (zero = false   one = true)\n\n");
	
	char str1[] = "This is a test return 1";
	char str2[] = "This is a test return 1";
	char* a = str1;
	char* b = str2;
	printf("String 1 \"%s\"\n",a);
	printf("String 1 \"%s\"\n",b);
	
	printf("Result: %d\n",testEqual(a,b));
	char str3[] = "This is a test";
	char str4[] = "This should be zero";
	a = str3;
	b = str4;
	printf("String 1 \"%s\"\n",a);
	printf("String 1 \"%s\"\n",b);
	
	printf("Result: %d\n",testEqual(a,b));
	return 0;
}
