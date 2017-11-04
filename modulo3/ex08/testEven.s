.section .data

	.global vecptr

.section .text
	.global testEven
	
testEven:
#prologue
	pushl %ebp # save previous stack frame pointer
	pushl %esi	
	movl %esp, %ebp # the stack frame pointer for sum function
	
#body
	movl (%esi), %eax
	shrl $1, %eax
	jnc pair
	movl $0, %eax
	jmp end
pair:
	movl $1, %eax	
end:
# epilogue
	
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %esi
	popl %ebp # restore the previous stack frame pointer
ret
