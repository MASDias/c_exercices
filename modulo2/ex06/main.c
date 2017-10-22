#include <stdio.h>
#include "contatBytes.h"
short swapper = 19756;
char contatByte1 = 4;
char contatByte2 = 5;
int main(void){
	printf("Valor a ser trocado os bytes: %d\n",swapper);
	printf("Novo valor apos (swapBytes): %d\n",swap());
	printf("Novo valor contatByte1 = %d contatByte2 = %d\n", contatByte1,contatByte2);
	printf("Novo valor contatenado por dois bytes: %d\n", contatBytes());
	return 0;
}
