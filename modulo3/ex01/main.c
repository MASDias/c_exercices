#include <stdio.h>
#include "spaceCount.h"
char* ptr1;
int main(void){
	ptr1="Isto e um teste para verificar espaços" ;
	printf("A frase (%s) tem %d espaços",ptr1, spaceCount());
	return 0;
}
