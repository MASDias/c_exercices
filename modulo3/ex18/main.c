#include <stdio.h>
#include "countSeq.h"
int num=8;
int vecptr[] = {1,2,3,4,5,6,7,8};
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
