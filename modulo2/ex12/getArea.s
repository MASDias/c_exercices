.section .data
LENGTH:
	.int 10
WIDTH:
	.int 15
	
.section .text
.global getArea
getArea:
#prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
#body
	movl LENGTH, %eax
	movl WIDTH, %ebx
	mul %ebx #pois nao faz o produto sem o valor guardado em registo
# epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
