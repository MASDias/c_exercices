#include <stdio.h>
#include <limits.h>
#include "convert.h"

float average_two_numbers(char *number1, char *number2){
	int n1 = string_to_int(number1);
	int n2 = string_to_int(number2);
	float average = 0;
	
	average = (float)(n1+n2)/2;
	
	return average;
	
}
