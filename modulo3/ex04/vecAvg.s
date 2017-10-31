.section .data
.global sum
.global num
.section .text
.global vecAvg
vecAvg:
#prologue
	pushl %ebp
	movl %esp, %ebp
#body
	movl $0, %edx
	movl sum, %eax 
	idivl num
#epilogue
	movl %ebp, %esp
	popl %ebp
ret

