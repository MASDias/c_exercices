#include <stdio.h>
#include <limits.h>
void powerRef(int* x, int y){
	int i;
	int pot = *x;
	printf("\n");
	for(i = 1; i < y; i++){
		printf("%d ^ %d = %d\n",pot, i , *x);
		*x = *x*(pot);
	}
	printf("%d ^ %d = %d\n",pot, y , *x);
}
