#include <stdio.h>
#include "change_address.h"
#include "save_data.h"
#include "student.h"
	
int main(void){
	Student s;
	Student* ptr_s = &s;
	int age = 12;
	int number = 10;
	char name[80] = "Miguel Dias";
	char address[120] = "Rua 9 de julho";
	
	save_data(ptr_s, age, number, name, address);
	
	printf("\nAge: %d\n", ptr_s->age);
	printf("Number: %d\n", ptr_s->number);
	printf("Name: %s\n", ptr_s->name);
	printf("Address: %s\n\n", ptr_s->address);
	
	char newAddress[120] = "Rua dos Panados Vietnamitas";
	
	change_address(ptr_s, newAddress);

	printf("NewAddress: %s\n\n", ptr_s->address);
	
	return 0;
}
