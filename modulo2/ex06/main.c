#include <stdio.h>
#include "contatBytes.h"
short swapper = 15;
char contatByte1 = 4;
char contatByte2 = 5;
short newContatByte = 0;
short newValue = 0;
int main(void){
	printf("Valor ser contenado: 15\n");
	newValue = swap();
	newContatByte = contatBytes();
	printf("Novo valor apos (swapBytes): %d\n",newValue);
	printf("Novo valor contatenado por dois bytes: %d\n", newContatByte);
	return 0;
}
