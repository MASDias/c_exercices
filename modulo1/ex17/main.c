#include <stdio.h>
#include "swap.h"
#define N 10
int main(void){
	int vec1[N] = {1,2,3,4,5,6,7,8,9,10};
	int vec2[N] = {10,9,8,7,6,5,4,3,2,1};
	int i;
	printf("Vec1 Before: {");
	for (i = 0; i < N; i++){
		printf("%d%s",*(vec1+i),(i<N-1)?", ":"}\n");
	}
	printf("Vec2 Before: {");
	for (i = 0; i < N; i++){
		printf("%d%s",*(vec2+i),(i<N-1)?", ":"}\n");
	}
	swap(vec1,vec2,N);
	printf("Vec1 After: {");
	for (i = 0; i < N; i++){
		printf("%d%s",*(vec1+i),(i<N-1)?", ":"}\n");
	}
	printf("Vec2 After: {");
	for (i = 0; i < N; i++){
		printf("%d%s",*(vec2+i),(i<N-1)?", ":"}\n");
	}
	return 0;
}
