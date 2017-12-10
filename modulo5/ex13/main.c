#include <stdio.h>
#include <stdlib.h>
#include "stack_struct.h"
#include "pop.h"
#include "push.h"

int main(void){
	stack_struct ss;
	stack_struct* stack = &ss;
	
	stack->v = (int*) malloc(0);
	stack->i=0;
	stack->size=0;
	stack->address = stack->v; 
	
	printf("------   Before push   ------\n"); 
	printf("v[0]=%d\n" ,stack->v[0]); 
	printf("Adress of stack: %p\n" ,stack->address);
	printf("i = %d\n" ,stack->i); 
	printf("size: %d\n\n" ,stack->size);
	
	printf("------   Atfer push   ------\n"); 
	push(stack,1);
	printf("v[0]=%d\n" ,stack->v[0]); 
	printf("Adress of stack: %p\n" ,stack->address);
	printf("i = %d\n" ,stack->i); 
	printf("size: %d\n\n" ,stack->size);
	
	push(stack,2);
	printf("v[1]=%d\n" ,stack->v[1]); 
	printf("Adress of stack: %p\n" ,stack->address);
	printf("i = %d\n" ,stack->i); 
	printf("size: %d\n\n" ,stack->size);
	
	push(stack,3);
	printf("v[2]=%d\n" ,stack->v[2]); 
	printf("Adress of stack: %p\n" ,stack->address);
	printf("i = %d\n" ,stack->i); 
	printf("size: %d\n\n" ,stack->size);
	
	push(stack,3);
	printf("v[3]=%d\n" ,stack->v[3]); 
	printf("Adress of stack: %p\n" ,stack->address);
	printf("i = %d\n" ,stack->i); 
	printf("size: %d\n\n" ,stack->size);
	
	printf("------   Atfer pop   ------\n\n"); 
	pop(stack);
	printf("v[2]=%d\n" ,stack->v[2]); 
	printf("Adress of stack: %p\n" ,stack->address);
	printf("i = %d\n" ,stack->i); 
	printf("size: %d\n\n" ,stack->size);
	pop(stack);
	printf("v[1]=%d\n" ,stack->v[1]); 
	printf("Adress of stack: %p\n" ,stack->address);
	printf("i = %d\n" ,stack->i); 
	printf("size: %d\n\n" ,stack->size);
	pop(stack);
	printf("v[0]=%d\n" ,stack->v[0]); 
	printf("Adress of stack: %p\n" ,stack->address);
	printf("i = %d\n" ,stack->i); 
	printf("size: %d\n\n" ,stack->size);
	
	free(stack->v);
	
	return 0;
}
