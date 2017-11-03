.section .data
	.global ptr1
	.global ptr2
	.global ptr3
	
.section .text
	.global str_cat
	
str_cat:
#prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
	
#body
	movl ptr1, %esi
	movl ptr3, %edi
	
iterator:
	movb (%esi), %cl
	cmpb $0, %cl
	je next
	movb %cl, (%edi)
	
	incl %esi
	incl %edi
	
	jmp iterator
	
next:
	movl ptr2, %esi
	
iterator2:
	movb (%esi), %cl
	cmpb $0, %cl
	jz end
	movb %cl, (%edi)
	
	incl %esi
	incl %edi
	
	jmp iterator2

	
# epilogue
end:
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
