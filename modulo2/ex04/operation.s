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
#body
	movl op1, %eax
	movl op2, %ecx
	movl CONST, %edx
	
	subl %edx, %eax #subtrair a eax edx  (op1-const)
	subl %ecx, %edx #subtrair a edx ecx  (const-op2)
	subl %edx, %eax #subtrai a eax edx (op1-const)-(const-op2)

#epilogue
	movl %ebp, %esp
	popl %ebp
ret
