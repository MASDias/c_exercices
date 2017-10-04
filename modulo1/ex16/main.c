#include <stdio.h>
#include "whereExists.h"

int main(void){
	
	char str1[] = "potatoes";
	char str2[] = "I love potatoes";
	
	char str3[] = "BEST ARQCP TEACHER";
	char str4[] = "We have the BEST ARQCP TEACHER in the world";
	
	char str5[] = "Lollipop";
	char str6[] = "Hope this is null!";
	
	printf("\nString 1: %s\n", str1);
	printf("String 2: %s\n", str2);
	printf("\nIt should start from string 1: %s\n", where_exists(str1, str2));
	
	printf("------------------------------------");
	
	printf("\nString 3: %s\n", str3);
	printf("String 4: %s\n", str4);
	printf("\nIt should start from string 3: %s\n", where_exists(str3, str4));
	
	printf("------------------------------------");
	
	printf("\nString 5: %s\n", str5);
	printf("String 6: %s\n", str6);
	printf("\nIt should return null: %s\n\n", where_exists(str5, str6));
	
	return 0;
}
