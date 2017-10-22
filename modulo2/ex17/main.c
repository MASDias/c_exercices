#include <stdio.h>
#include "hotCold.h"
	short current = 15, desired = 15;
int main(void){
	if (current > desired){
		printf("%d segundos a arrefecer\n",hotCold());	
	}else if ((current < desired)){
		printf("%d segundos a aquecer\n",hotCold());			
	}else{
		printf("A temperatura e a mesma, de %d graus\n",current);	
	}
	return 0;
}
