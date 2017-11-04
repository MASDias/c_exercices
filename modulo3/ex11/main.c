#include <stdio.h>
#include "greater10.h"
int num=5;
long int ptrvec[] = {11,10,10,50,6};
int main(void){
	int i=0;
	printf("{");
	for (i = 0; i < num; i++){
		printf("%lu%s",ptrvec[i],(i<num-1)?", ":"}\n");
	}
	printf("Total elementes greater than 10 are: %d\n",greater10());
	return 0;
}
