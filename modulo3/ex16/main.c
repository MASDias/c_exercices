#include <stdio.h>
#include "sortWithoutReps.h"

int vec[]={1,2,1,7,3,0,4,0};
int vec2[9];
int *ptrsrc;
int *ptrdest;
int num = 8;
int x = 0;

int main(void){
	int i;
	int ret = 0;

	ptrsrc = vec;
	ptrdest = vec2;
	
	printf("\nVector Source:{");
	for (i = 0; i < num; i++)
	{
		printf("%d%s", vec[i], i <= num-2 ? ", " : "");
	}
	printf("}\n");
		
	ret = sort_without_reps();
	
	printf("\nVector Destiny:{");
	for (i = num-ret; i < num; i++)
	{

		printf("%d%s", vec2[i], i <= num-2 ? ", " : "");
		
	}
	printf("}\n");
	
	printf("\nNumero de elementos inseridos no novo vetor: %d\n", ret);
	
	return 0;
	
}
