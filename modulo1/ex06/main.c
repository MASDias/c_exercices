#include <stdio.h>
#include "powerRef.h"

int main(void){
	int x=0;
	int y=0;
	printf("Insert the base\n");
	scanf("%d",&x);
	printf("Insert the exponent\n");
	scanf("%d",&y);
	powerRef(&x,y);
	return 0;
}
	
