#include <stdio.h>
#include "frequencies.h"
#define TAMANHO_VEC 11
#define TAMANHO_FREQ 21

int main (void){
	float  grades[TAMANHO_VEC] = {8.23, 12.25, 16.45, 12.45, 10.05, 6.45, 14.45, 0.0, 12.67, 16.23, 18.75};
	int freq[TAMANHO_FREQ] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int i;
	frequencies(grades, TAMANHO_VEC, freq);
	for (i = 0; i < TAMANHO_FREQ; i++){
		if(i == 0){
			printf("{");
		}
		printf("Frequencies vector = %d%s",*(freq+i),(i<TAMANHO_FREQ-1)?", ":"}\n");
	}
	return 0;
}
