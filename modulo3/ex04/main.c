#include <stdio.h>
#include "vecAvg.h"
#include "vecSum.h"
int vecptr []= {1,2,3,4,5,6};
int num=6;
int sum=0;
int main(void){
	printf("{");
	int i=0;
	for (i = 0; i < num; i++){
		printf("%d%s",vecptr[i],(i<num-1)?", ":"}\n");
	}
	long long int avg = vecAvg();
	int avgParteInt = (int)avg;
	printf("nAvg = %.2f\n",(avgParteInt+(float)(avg>>32)/num)); 
	return 0;
}
