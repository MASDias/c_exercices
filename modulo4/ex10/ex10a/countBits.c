#include <stdio.h>

int countBits(int a){
	int counter=0;
	while (a!=0){
		int bit = a&1;
		if (bit == 0 ){
			counter++;
		}
		a = a>>1;
	}
	return counter;
}
