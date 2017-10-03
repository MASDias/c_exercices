#include <stdio.h>
#include "palindrome.h"
#define  MAX_SIZE = 201; 
int main(void){
	char str[101];
	int checkPalindrome;
	printf("Insert a string to check if it is a palindrome\n");
	fgets(str,101,stdin);
	checkPalindrome = palindrome(str);
	
	if (checkPalindrome == 1){
		printf("\nThe inserted word is a palindrome\n");	
	}else{
		printf("\nThe inserted word is not a palindrome\n");
	}
	return 0;
}
