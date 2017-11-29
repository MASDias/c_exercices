#include <stdio.h>
#include "save_grades.h"
#include "student.h"
#define N 10  
int main(void){
	Student p;
	Student* ptr_p = &p;
	int grades [N] = {10,11,12,12,16,15,8,13,19,20};
	int* grades_ptr = grades;
	int i=0;
	save_grades(ptr_p, grades_ptr);
	printf("Students Grades:\n");
	for (i = 0; i < N; i++){
		printf("Class %d: %d\n",i+1, p.grades[i]);
	}
	return 0;
}
