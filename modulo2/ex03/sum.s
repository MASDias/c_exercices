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
	movl op1, %ebx #place op1 in ebx
	movl op2, %eax #place op2 in eax
	addl %ebx, %eax #add ebx to eax. Result is in eax
	movl op3, %ebx
	subl %ebx, %eax
	movl %ebx, res # copy the result to res
# epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret