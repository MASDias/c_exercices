#include <stdio.h>
#include "save_data.h"
#include "student.h"
	
int main(void){
	Student p;
	Student* ptr_p = &p;
	int age = 12;
	int number = 10;
	char name[80] = "Miguel Dias";
	char address[120] = "Rua 9 de julho";
	
	save_data(ptr_p, age, number, name, address);
	
	printf("\nAge: %d\n", ptr_p->age);
	printf("Number: %d\n", ptr_p->number);
	printf("Name: %s\n", ptr_p->name);
	printf("Address: %s\n\n", ptr_p->address);
	
	return 0;
}
