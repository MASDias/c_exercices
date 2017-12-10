#include <stdio.h>
#include <stdlib.h>
#include "stack_struct.h"

void push(stack_struct* stack, int value){
	stack->size++;
	stack->v = (int*)realloc(stack->v, stack->size * sizeof(int));
	stack->v[stack->i] = value;
	stack->i++;
}
