.section .data
	.global ptr1
	.global ptr2
	
.section .text
	.global str_copy_p2
	
str_copy_p2:
#prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
	
#body
	movl ptr1, %esi
	movl ptr2, %edi

str_loop:
	movb (%esi), %cl
	movb %cl, (%edi)
	cmpb $0 , %cl
	jz end
	cmpb $'b', %cl
	je switchB
	cmpb $'v', %cl
	je switchV
	incl %esi
	incl %edi
	jmp str_loop
	
switchB:
	movb $'v', %cl
	movb %cl, (%edi)
	incl %esi
	incl %edi
	jmp str_loop
	
switchV:
	movb $'b', %cl
	movb %cl, (%edi)
	incl %esi
	incl %edi
	jmp str_loop

# epilogue
end:
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
