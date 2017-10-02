#include <stdio.h>

int sum_evens(int* values){
	
	int length = values[0] + 1;
	int sum = 0;
	int i;
	
	for (i = 1; i < length; i++)
	{
		if(((*(values + i)) % 2) == 0){
			sum += *(values + i);		
		}
	}
	
	return sum;
	
}
