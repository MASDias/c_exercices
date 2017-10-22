#include <stdio.h>
#include "crossSum.h"
short s1 = 0, s2 = 256; 
short swapper = 19756;
char contatByte1 = 4;
char contatByte2 = 5;
int main(void){
	printf("Valor a ser trocado os bytes: %d\n",swapper);
	printf("Novo valor apos (swapBytes): %d\n",swap());
	printf("Novo valor contatByte1 = %d contatByte2 = %d\n", contatByte1,contatByte2);
	printf("Novo valor contatenado por dois bytes: %d (contatBytes)\n", contatBytes());
	//256 - 0000 0001 0000 0000
	//  0 - 0000 0000 0000 0000 
	//Res - 0000 0000 0000 0001 = 1
	printf("Valores de soma cruzada de bytes crossSum1 = %d crossSum2 = %d\nResultado da soma cruzada de bytes = %d\n",s1,s2, crossSumBytes()); 
	return 0;
}
