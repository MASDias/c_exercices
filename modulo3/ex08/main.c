#include <stdio.h>
#include "testEven.h"
#include "sumVec.h"
int num = 5;
int vec[] = {4,6,2,1,4};
int* vecptr;
int main (void){
	int i=0;
	vecptr=vec;
	printf("{");
	for (i = 0; i < num; i++){
		printf("%d%s",vec[i],(i<=num-2)?", ":"}\n");
	}
	printf("The sum of the even numbers in the vector is: %d\n",sumVec());
	return 0;
}
