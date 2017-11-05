.section .data
	.global ptrdest
	.global ptrsrc

.section .text
	.global exists
	
exists:
#prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
#body
	movl ptrdest, %edi
	movl $0, %eax
	movl $0, %ecx
	
ciclo:
	cmpl %ebx, (%edi)
	je return

	addl $4, %edi
	
	incl %ecx
	cmpl num, %ecx
	je end
	
	jmp ciclo
	
return:
	movl $1, %eax
	jmp end
	
	
# epilogue
end:
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
