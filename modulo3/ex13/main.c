#include <stdio.h>
#include "vecFill.h"
int num=7;
int ptrvec[] = {100,-11,-10,-10,-50,-6,100};
int main(void){
	int i=0;
	printf("{");
	for (i = 0; i < num; i++){
		printf("%d%s",ptrvec[i],(i<num-1)?", ":"}\n");
	}
	vecFill();
	printf("{");
	for (i = 0; i < num; i++){
		printf("%d%s",ptrvec[i],(i<num-1)?", ":"}\n");
	}
	return 0;
}
