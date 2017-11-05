#include <stdio.h>
#include "arraySort.h"
int num=7;
int ptrvec[] = {99,1,4,55,5,878,1};
int main(void){
	int i=0;
	printf("Original vector\n");
	printf("{");
	for (i = 0; i < num; i++){
		printf("%d%s",ptrvec[i],(i<num-1)?", ":"}\n");
	}
	arraySort();
	printf("New ordered vector\n");
	printf("{");
	for (i = 0; i < num; i++){
		printf("%d%s",ptrvec[i],(i<num-1)?", ":"}\n");
	}
	return 0;
}
