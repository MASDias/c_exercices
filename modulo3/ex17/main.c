#include <stdio.h>
#include "frequencies.h"
int num=8;
int ptrgrades[] = {10,12,4,20,13,15,22,19};
int ptrfreq[21];
int main(void){
	int i=0;
	frequencies();
	printf("Grades with '-1' are invalid\n");
	printf("Grades\n");
	printf("{");
	for (i = 0; i < num; i++){
		printf("%d%s",ptrgrades[i],(i<num-1)?", ":"}\n");
	}
	printf("Frequencies:\n");
	printf("{");
	for (i = 0; i < 21; i++){
		printf("%d%s",ptrfreq[i],(i<20)?", ":"}\n");
	}
	return 0;
}
