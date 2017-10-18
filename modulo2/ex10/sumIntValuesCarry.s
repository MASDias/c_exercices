.section .data
	.global a
	.global b
.section .text
.global sumIntValuesCarry # int sumIntValuesCarry(void)
sumIntValuesCarry:
#prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
#body
	movl $0, %eax #limpar qualquer lixo que possa ter no regito %eax
	movl $0, %ebx #limpar qualquer lixo que possa ter no regito %ebx
	movl a, %eax
	addl b, %eax
jo overflow
	movl $0, %eax
	jmp fim
overflow:
	movl $1, %eax
fim:
# epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret

