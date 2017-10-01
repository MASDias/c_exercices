#include <stdio.h>
#include "arraySortPointer.h"

int main (void){
	int vec [100];
	int n;
	int i;	

	printf("Ordering a integer array\n\n");
	printf("How many integer to insert?\n");
	scanf("%d", &n);
	for (i = 0; i < n; ++i){
        printf("Please insert a number: ");
        scanf("%d", &vec[i]);
	}
	arraySortPointer(&vec[0],n);
	printf("\nInteger array ordered (Ascending order)\n\n");
	for (i = 0; i < n; ++i){
        printf("%d: %d\n",(i+1), vec[i]);
	}
	return 0 ;
}
