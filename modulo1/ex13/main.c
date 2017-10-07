#include <stdio.h>
#include "iterator.h"

int main(void){
	char str[] = "The number must be saved";//string que vai ser testada para encontrar determinada letra
	char str2[] = "This is a test";
	char c = 'u';//letra que vai ser procurada numa determinada string
	int vec[51];//vetor cujo vai guardar as posições da letra que se encontra na string "str"
	int i;
	int limit = iterator(str, c, vec);//função que vai verificar se encontra a letra pretendida numa determinada string e devolve tamanho do vetor que contem as posições
	
	printf("\nGiven string: 'The number must be saved'\n");
	printf("\nGiven character: 'u'\n\n");
	printf("Vec of index where chosen character was found: {");
	for (i = 0; i < limit; i++){
		printf("%d%s", *(vec + i), (i < limit-1 ? ", " : ""));
	}
	printf("}\n\n");
	return 0;
}
