#include <stdio.h>
#include "crossSum.h"
short s1 = 5, s2 = 10; 
short res = 0;
short swapper = 15;
char contatByte1 = 4;
char contatByte2 = 5;
short newContatByte = 0;
short newValue = 0;
int main(void){
	
	res = crossSumBytes();
	
	printf("\nCrossed Sum of 5 and 10 = %d\n", res); 
	
	return 0;
}
