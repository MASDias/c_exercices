#include <stdio.h>
#include "sumEvens.h"

int main(void){
	
	int values[100];
	int sum = 0;
	int i;
	
	printf("How many values do you want to insert?\n");
	scanf("%d", &values[0]);
	printf("\n");
	
	for (i = 1; i < (values[0] + 1); ++i){
		printf("Please insert a number: ");
		scanf("%d", &values[i]);
	}

	sum = sum_evens(values);
	
	printf("\nSum of all even numbers in the given array: %d \n\n", sum);
	
	
	return 0;
}
