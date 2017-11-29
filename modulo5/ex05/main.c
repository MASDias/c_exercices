#include <stdio.h>
#include "save_grades.h"
#include "student.h"
#include "find_greater.h"
#define N 10  
int main(void){
	Student p;
	Student* ptr_p = &p;
	int grades [N] = {10,11,12,12,16,15,8,13,19,20};
	int* grades_ptr = grades;
	int i=0;
	save_grades(ptr_p, grades_ptr);
	printf("\nVec of grades: {");
	for (i = 0; i < N; i++)
	{
		printf("%d%s", p.grades[i], i <= N-2 ? ", " : "");
	}
	printf("}\n");
	
	int minimum = 12;
	int greater_grades[10];
	int* greater_ptr = greater_grades;
	int result = 0;
	
	result = find_greater(ptr_p, minimum, greater_ptr);
	
	printf("\nMinimum grade: %d", minimum);
	printf("\nNew vec of grades: {");
	for (i = 0; i < result; i++)
	{
		printf("%d%s", greater_grades[i], i <= result-2 ? ", " : "");
	}
	printf("}");
	printf("\nNumber of grades added: %d\n\n", result);
	return 0;
}
