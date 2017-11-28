#include <stdio.h>
#include "save_data.h"
#include "student.h"
#define N 5 
int main(void){
	Student p[N];
	Student* ptr_p = p;
	int age = 12;
	int number = 10;
	char name[80] = "Miguel Dias";
	char address[120] = "Rua 9 de julho";
	int i=0;
	for (i = 0; i < N; i++){
		save_data(ptr_p, (age+i), (number+i), name, address);	
		ptr_p++;
	}
	for (i = 0; i < N; i++){
		printf("Student %d\n",i+1);
		printf("Age: %d\n", p[i].age);
		printf("Number: %d\n", p[i].number);
		printf("Name: %s\n", p[i].name);
		printf("Address: %s\n\n", p[i].address);	
	}
	return 0;
}
