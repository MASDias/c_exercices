#include <stdio.h>
#include "countSeq.h"
int num=8;
int vecptr[] = {1,5,4,3,3,5,6,9};
int main(void){
	int i=0;
	int total = countSeq();
	printf("Vector\n");
	printf("{");
	for (i = 0; i < num; i++){
		printf("%d%s",vecptr[i],(i<num-1)?", ":"}\n");
	}
	printf("The total of sequences are: %d\n", total);
	return 0;
}
