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
carry:
	movl $-2, %eax
	jmp end
overflow:
	movl $-1, %eax
end:
# epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
