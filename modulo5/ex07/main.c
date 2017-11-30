#include <stdio.h>
#include "save_data.h"
#include "estrutura.h"

int main(void){
	s2 s;
	s2* ptr_s = &s;
	
	short w[3] = {1,2,3};
	int j = 5;
	char c[3] = {'a','b','c'};
	
	save_data(ptr_s, w, j, c);
	
	int i;
	
	printf("Struct data print:\n");
	printf("Vec of shorts: {");
	for (i = 0; i < 3; i++)
	{
		printf("%d%s", s.w[i], i <= 1 ? ", " : "");
	}
	printf("}\n");

	printf("Int j : %d\n", s.j);
	
	printf("Vec of chars: {");
	for (i = 0; i < 3; i++)
	{
		printf("%c%s", s.c[i], i <= 1 ? ", " : "");
	}
	printf("}\n\n");

	return 0;
}
