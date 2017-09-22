#include <stdio.h>
#include <limits.h>
#include "convert.h"

float average_two_numbers(char *str1, char *str2){
	int number1 = string_to_int(str1);
	int number2 = string_to_int(str2);
	float average = 0;
	
	average = (float)(number1+number2)/2;
	
	return average;
	
}
