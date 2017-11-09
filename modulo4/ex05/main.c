#include <stdio.h>
#include "cube.h"

int main(void){
	
	int v1 = 2;
	int v2 = 3;
	int *v1ptr = &v1;
	printf("\nv1 before modification = %d", v1);
	int result = dec_cube(v1ptr,v2);
	printf("\nv1 after modification = %d", v1);
	printf("\nv2 = %d", v2);
	printf("\nCube of v2: %d\n\n", result);
	return 0;	
}
