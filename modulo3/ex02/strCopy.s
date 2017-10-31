.section .data
	.global ptr1
	.global ptr2
	
.section .text
	.global str_copy_p
	
str_copy_p:
#prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
	
#body
	movl $ptr1, %eax
	movl $ptr2, %ebx
	cmpb $0, (%eax)
	je end
	cmp $'b', (%eax)
	jne next

next:
	movb $0, %cl
	movb (%eax),%cl
	movb %cl,(%ebx)
	incl %eax
	incl %ebx
	jmp str_copy_p
	
# epilogue
end:
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
