#include <stdio.h>
#include "shortCompresser.h"

int main(void){
	
	int n_shorts = 8;
	short vecShorts[] = {1,2,3,4,5,6,7,8};
	int vecIntegers[n_shorts/2];
	int i;
	
	printf("\nVetor de shorts: {");
	for (i = 0; i < n_shorts; i++)
	{
		printf("%d%s", vecShorts[i], i < n_shorts - 1 ? ", " : "");
	}
	printf("}\n\n");
	compress_shorts(vecShorts, n_shorts, vecIntegers);
	printf("\nVetor de shorts comprimido (Inteiros): {");
	for (i = 0; i < n_shorts/2; i++)
	{
		printf("%d%s", vecIntegers[i], i < (n_shorts/2)-1 ? ", " : "");
	}
	printf("}\n\n");
	
	return 0;
}
