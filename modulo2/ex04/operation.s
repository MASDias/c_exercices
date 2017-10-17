.section .data
.global op1
.global op2
.global res

CONST:
	.int 10
	
.section .text
.global operation
operation:
#prologue
	pushl %ebp
	movl %esp, %ebp
	movl op1, %ebx
	movl op2, %ecx
	movl CONST, %edx
	subl %edx, %ebx
	subl %ecx, %edx
	subl %edx, %ebx
	movl %ebx, %eax
	movl %eax, res
#epilogue
	movl %ebp, %esp
	popl %ebp
	ret
