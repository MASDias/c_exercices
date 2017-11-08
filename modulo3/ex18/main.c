#include <stdio.h>
#include "countSeq.h"
int num=10;
int vecptr[] = {1,2,1,4,5,4,7,8,9,10};
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
