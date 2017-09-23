#include <stdio.h>
#include "fillVector.h"
#include "average30.h"

int main(void){

	char vector[30] = "";
	
	fill_vector(vector);
	
	printf("Average: %.2f\n", average_30_numbers(vector));
	
	return 0;
	
}
