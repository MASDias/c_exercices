#include <stdio.h>
#include "swap.h"
short swapper = 19756;
int main(void){
	printf("Valor a ser trocado os bytes: %d\n",swapper); //0100 1101 0010 1100 
	printf("Novo valor apos (swapBytes): %d\n",swap()); // resultado : 0010 1100 0100 1101
	return 0;
}
