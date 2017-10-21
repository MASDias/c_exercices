.section .data
	.global op1
	.global op2
.section .text
.global sum2Ints # long long int sum2Ints()
sum2Ints:
#prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
#body
	movl $0, %eax #limpar qualquer lixo que possa ter no regito %eax
	movl $0, %edx #limpar qualquer lixo que possa ter no regito %edx
	movl op1, %eax
	addl op2, %eax
#epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
