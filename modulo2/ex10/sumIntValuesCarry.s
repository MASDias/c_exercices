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
	movl a, %eax
	addl b, %eax
jo overflow
jc carry
jmp fim
overflow:
	movl $-1, %eax
	jmp fim
carry:
	movl $-2, %eax
fim:
# epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret

