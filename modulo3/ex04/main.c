#include <stdio.h>
#include "vecAvg.h"
#include "vecSum.h"
int vecptr []= {1,2,3,4,5,6};
int num = 6;
int sum=0;
int main(void){
	sum = vecSum();
	long long int avg = vecAvg();
	int avgParteInt = (int)avg;
	printf("Sum of vector = %d\nAvg = %.2f\n",sum,(avgParteInt+(float)(avg>>32)/num)); 
	return 0;
}
