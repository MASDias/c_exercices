#include <stdio.h>
#include "save_data.h"
#include "s1.h"
int main(void){
	s1 s;
	s1* ptr_s = &s;
	
	int i = 3;
	char c = 'c';
	int j = 12;
	char d = 'x';
	
	save_data(ptr_s, i, c, j, d);
	
	printf("Struct data print:\n");
	printf("First int : %d\n", s.i);
	printf("First char : %c\n", s.c);
	printf("Second int : %d\n", s.j);
	printf("Second char : %c\n", s.d);
	return 0;
}
