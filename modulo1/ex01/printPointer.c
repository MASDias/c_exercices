#include <stdio.h>
#include "printPointer.h"

void printPointer(void){
	int x = 5;
	int* xPtr = &x;
	float y = *xPtr + 3;
	int vec[] = {10, 11, 12, 13};
	
	printf("Value of x: %d\n", x);
	printf("Value of y: %.2f\n", y);
	printf("Adress of x: %p\n", &x);
	printf("Adress of xPtr: %p\n", xPtr);
	printf("Value pointed by xPtr: %d\n", *xPtr);
	printf("Value of vec[0] %d\n", vec[0]);
	printf("Value of vec[1] %d\n", vec[1]);
	printf("Value of vec[2] %d\n", vec[2]);
	printf("Value of vec[3] %d\n", vec[3]);
	printf("Address of vec[0] %p\n", &vec[0]);
	printf("Address of vec[1] %p\n", &vec[1]);
	printf("Address of vec[2] %p\n", &vec[2]);
	printf("Address of vec[3] %p\n", &vec[3]);
	
}
	
