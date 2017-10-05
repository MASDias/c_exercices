#include <stdio.h>
#include "iterator.h"

int main(void){
	
	char str[] = "The number must be saved";
	char str2[] = "This is a test";
	char c = 'u';
	int vec[51];
	int i;
	
	int limit = iterator(str, c, vec);
	
	printf("\nGiven string: 'The number must be saved'\n");
	printf("\nGiven character: 'u'\n\n");
	printf("Vec of index where chosen character was found: {");
	for (i = 0; i < limit; i++)
	{
		printf("%d%s", *(vec + i), (i < limit-1 ? ", " : ""));
	}
	printf("}\n\n");
	return 0;
}
