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
	movl $0, %edx
	movl $0, %ebx
	movl $0, %eax
	movl $0, %ecx
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
