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
	movl a, %eax
	movl b, %ebx
	addl %ebx, %eax
jo overflow #signed numbers
jc carry #unsigned numbers
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
