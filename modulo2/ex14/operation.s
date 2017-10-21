.section .data
	.global num
tres:
	.int 3
doze:
	.int 12
cinco:
	.int 5
um:
	.int 1
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
	
	movl num, %eax
	subl um, %eax
	imul tres, %eax
	addl doze, %eax
	idivl tres, %eax
	addl cinco, %eax
	subl num, %eax
	
# epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
