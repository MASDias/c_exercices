.section .data
	.global a
	.global b
	.global c
	.global d

.section .text
.global operation
operation:
#prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
#body
	movl $0, %eax #limpar qualquer lixo que possa ter no regito %eax
	movl $0, %ebx #limpar qualquer lixo que possa ter no regito %ebx
	movl $0, %ecx #limpar qualquer lixo que possa ter no regito %ecx
	movl $0, %edx #limpar qualquer lixo que possa ter no regito %edx
	
	movl d, %ebx
	movl b, %eax
	movl c, %ecx
	imul %ecx 
	idivl %ebx
	movl a, %ebx
	addl %ebx, %eax
	
# epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
