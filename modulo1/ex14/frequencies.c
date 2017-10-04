#include <stdio.h>

int integerPart(float num){
	int result;
	result = (int) num;
	return result;
}

void frequencies(float* grades, int n, int* freq){
	int intGrade;
	int i;
	for (i = 0; i < n; i++){
		intGrade = integerPart(*(grades+i));
		*(freq+intGrade)+= 1;
	}
	
}
