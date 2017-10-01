#include <stdio.h>
#include "arraySortNoReps.h"
int main (void){
	int vec[20];
	int dest[20];
	int n;
	int t;
	int i = 0;
	printf("Ordering a integer array\n\n");
	printf("How many integer to insert?\n");
	scanf("%d", &n);
	for (i = 0; i < n; ++i){
		printf("Please insert a number: ");
		scanf("%d", &vec[i]);
	}
	t = arraySortNoReps(&vec[0], n, &dest[0]); 
	printf("\nNew integer array (no Reps)\n\n");
	for (i = 0; i < t; ++i){
		printf("%d: %d\n",(i+1), dest[i]);
	}
	return 0;
}
