#include <stdio.h>
#include "powerRef.h"

int main(void){
	int x=2;
	int y=3;
	int flag=0;
	
	printf("\nx = %d", x); 
	printf("\ny = %d\n", y); 
	printf("\n");
	
	//No caso de o expoente ser negativo torna o y negativo.
	if(y < 0){
		flag = 1;
		y *= (-1);
	}
	
	int base = x;
	powerRef(&x,y);
	
	if (flag ==0){
		printf("%d ^ %d = %d\n",base, y , x);
	}else {
		printf("%d ^ -%d = %f\n",base, y , 1/(double)x);
	}
	
	return 0;
}
	
