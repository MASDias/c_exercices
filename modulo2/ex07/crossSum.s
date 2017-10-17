.section .data
	.global s1
	.global s2
.section .text
.global crossSumBytes # int crossSumBytes()
crossSumBytes:
#prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
	movl s1, %eax
	movl s2, %ebx
	addb %bh, %al
	addb %bl, %ah
#epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
