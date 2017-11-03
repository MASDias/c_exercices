#include <stdio.h>
#include "zeroHero.h"

short int vec[]={200,1500,1100,1001,40,500,5000};
short int *ptr;
int num = 7;

int main(void){
	int changes = 0;
	int i = 0;
	ptr = vec;
	
	printf("\n\nVector:{");
	for (i = 0; i < num; i++)
	{
		printf("%d%s", vec[i], i <= num-2 ? ", " : "");
	}
	printf("}\n");
	
	changes = vec_zero();
	
	printf("\nModified Vector:{");
	for (i = 0; i < num; i++)
	{
		printf("%d%s", vec[i], i <= num-2 ? ", " : "");
	}
	printf("}\n");
	printf("\nNumero de elementos alterados:%d\n\n", changes);
	
	return 0;
}
