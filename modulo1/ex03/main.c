#include <stdio.h>
#include "evenElements.h"

int main(void){
	
	const int SIZE = 10;
	int values[] = {1,2,3,4,5,6,7,8,9,10,11};
	
	even_elements(values, SIZE);
	
	return 0;
}
