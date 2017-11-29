#include <stdio.h>
#include <string.h>
#include "student.h"

void save_data(Student *p, int age, int number, char *name, char *address){
	p->age = age;
	p->number = number;
	strcpy(p->name, name);
	strcpy(p->address, address);
}
