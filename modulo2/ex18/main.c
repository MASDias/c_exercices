#include <stdio.h>
#include "functions.h"
int number = -3;
int main(void){
	
	int final;
	
	final = positive();
	
	printf("\nNúmero: %d\n", number);
	
	if(final==1){		
		printf("O número é Par Positivo: %d\n",final);
	}else if(final==2){
		printf("O número é Par Negativo: %d\n",final);
	}else if(final==3){		
		printf("O número é Impar Positivo: %d\n",final);
	}else if(final==4){			
		printf("O número é Impar Negativo: %d\n",final);
	}
	
	return 0;
}
