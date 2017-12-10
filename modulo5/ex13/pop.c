#include <stdio.h>
#include <stdlib.h>
#include "stack_struct.h"

void pop(stack_struct* stack){
	stack->size--;
	stack->v = (int*)realloc(stack->v, stack->size * sizeof(int));
	stack->i--;
}
	
