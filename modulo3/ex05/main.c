#include <stdio.h>
#include "vec_int.h"
int vecptr []= {1,2,3,4,5,6};
int num = 6;
int main(void){
	int i =0;
	printf("Original Vector\n");
	printf("{"); 	
	for (i = 0; i < num; i++){
		printf("%d%s",vecptr[i],(i<num-1)?", ":"}\n"); 	
	}
	vec_int();
	printf("New Vector\n");
	printf("{"); 	
	for (i = 0; i < num; i++){
		printf("%d%s",vecptr[i],(i<num-1)?", ":"}\n"); 	
	}
	return 0;
}
