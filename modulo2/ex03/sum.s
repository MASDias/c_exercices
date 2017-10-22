.section .data
.global op1
.global op2
.global op3
.global res
.section .text
.global sum # int sum(void)
sum:
# prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
#body	
	movl op1, %eax #guardar op1 no registo eax
	addl op2, %eax #add op2 em eax
	subl op3, %eax #subtrair op3 a soma anterior no registo eax
# epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
