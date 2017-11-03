.section .data
	.global ptr
	.global num
	
.section .text
	.global vec_zero
	
vec_zero:
#prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
#body
	movl ptr, %ebx
	movl num, %ecx
	movl $0, %eax
	movl $0, %edx
	
misterIterator:
	movw (%ebx), %dx
	cmpw $1000, %dx
	jge zeroTheBastard
	
	addl $2, %ebx
	loop misterIterator
	jmp end
	
zeroTheBastard:
	movw $0, %dx
	movw %dx, (%ebx)
	addl $2, %ebx
	incl %eax
	jmp misterIterator

	
# epilogue
end:
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
