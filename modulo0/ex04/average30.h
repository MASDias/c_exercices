#include <stdio.h>


float average_30_numbers(char *ch){
	int sum = 0;
	int number = 0;
	float average = 0;
	int i;
	
	for (i = 0; i < 30; i++)
	{
		number =(int) ch[i];
		sum += number;
		
	}
	printf("Sum: %d\n", sum);
	average = (float)(sum)/30;
	
	return average;
	
}
