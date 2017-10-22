.section .data
	.global a
	.global b
.section .text
.global sumIntValues # int sumIntValuesCarry(void)
sumIntValues:
#prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
#body
	movl a, %eax
	addl b, %eax
	jo overflow
	jmp end
overflow:
	jc carry #unsigned numbers
	movl $-1, %eax
	jmp end
carry:
	movl $-2, %eax
end:
# epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
