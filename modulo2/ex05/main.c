#include <stdio.h>
#include "swap.h"
short swapper = 15;
short newValue = 0;
int main(void){
	printf("Valor ser contenado: 15\n");
	newValue = swap();
	printf("Novo valor apos (swapBytes): %d\n",newValue);
	return 0;
}