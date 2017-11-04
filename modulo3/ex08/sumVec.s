.section .data
	.global vecptr
	.global num
.section .text
	.global sumVec
	
sumVec:
#prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
#body
	movl $0, %ecx
	movl $0, %eax
	movl vecptr, %esi
sum_pair:
	cmp num, %ecx 
	je end
	
	push %eax
	call testEven
	
	cmp $1, %eax
	popl %eax
	je sum
	incl %ecx
	addl $4, %esi
	jmp sum_pair
sum:
	incl %ecx
	addl (%esi), %eax
	addl $4, %esi
	jmp sum_pair
end:
# epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
