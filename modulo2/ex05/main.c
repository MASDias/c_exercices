#include <stdio.h>
#include "swap.h"
short swapper = 10;
short newValue = 0;
int main(void){
	printf("Valor op1:");
	newValue = swap();
	printf("Novo valor apos (swapBytes): %d\n",newValue);
	return 0;
}
