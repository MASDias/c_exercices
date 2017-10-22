#include <stdio.h>
#include "salaryRaiser.h"
unsigned int salary = 0, code = 0;
int main(void){
	
	printf("\nIntroduza o código do funcionário: ");
	scanf("%d",&code);
	printf("\nIntroduza o ordenado do funcionário: ");
	scanf("%d",&salary);
	
	int newSalary = salaryRaise();
	
	printf("O funcionário tem um novo ordenado de : %d\n", newSalary);		

	return 0;
	
	
	
	return 0;
}
