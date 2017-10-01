#include <stdio.h>
#include "arraySort.h"

int main (void){
	int vec [100];
	int n;
	int i;	

	printf("Ordering a integer array\n");
	printf("How many integer to insert?\n");
	scanf("%d", &n);
	for (i = 0; i < n; ++i){
        printf("Please insert a number: ");
        scanf("%d", &vec[i]);
	}
	arraySort(&vec[0],n);
	printf("Integer array ordered (Ascending order)\n");
	for (i = 0; i < n; ++i){
        printf("%d: %d\n",(i+1), vec[i]);
	}
	return 0 ;
}
