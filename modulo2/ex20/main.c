#include <stdio.h>
#include "functions.h"
#include "functions2.h"
int i = 16, j = 10, h = 0, g = 0, r = 0, finalAssembly = 0, finalC = 0;
int main(void){
	
	finalAssembly = f();
	finalC = fC(i, j);
	printf("Função f em Assembly: %d  vs Função f em C: %d\n", finalAssembly, finalC);
	
	finalAssembly = f2();
	finalC = f2C(i, j);
	printf("Função f2 em Assembly: %d  vs Função f2 em C: %d\n", finalAssembly, finalC);	
	
	finalAssembly = f3();
	finalC = f3C(i, j);
	printf("Função f3 em Assembly: %d  vs Função f3 em C: %d\n", finalAssembly, finalC);	
	
	finalAssembly = f4();
	finalC = f4C(i, j);
	printf("Função f4 em Assembly: %d  vs Função f4 em C: %d\n", finalAssembly, finalC);	
			
	return 0;
}
