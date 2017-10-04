#include <stdio.h>
#include "sumEvenValues.h"

int main (void){
	int vec[20];
	int sum = 0;
	int i;
	printf("How many integer to insert? (max: 20)\n");
	scanf("%d", vec);
	for (i = 1; i <= *(vec+0) ; i++){
		printf("Insert number %d:",i);
		scanf("%d", (vec+i));	
	}
	
	sum = sumEvenValues(vec);
	printf("\nSum of even numbers is: %d\n", sum);
	return 0;
}
