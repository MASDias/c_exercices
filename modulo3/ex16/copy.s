.section .data
	.global ptrsrc
	.global ptrdest
	.global num
	
.section .text
	.global copy_without_reps
	
copy_without_reps:
#prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
#body
	movl ptrsrc, %esi
	movl ptrdest, %edi
	movl $0, %edx
	movl $0, %eax
	
loop:
	movl (%esi), %ebx
	pushl %esi
	pushl %edi
	pushl %eax
	call exists
	cmpl $0, %eax
	popl %eax
	popl %edi
	popl %esi
	je addElement
	
	addl $4, %esi
	incl %edx
	cmpl num, %edx
	je end
	jmp loop
	
addElement:
	movl %ebx, (%edi)
	addl $4, %esi
	addl $4, %edi
	incl %eax
	incl %edx
	cmpl num, %edx
	je end
	jmp loop
	
# epilogue
end:
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
