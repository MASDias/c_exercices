.section .data
	.global ptr
	.global num
	
.section .text
	.global vec_diff
	
vec_diff:
#prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
#body
	movl ptr, %esi
	movl $0, %edi
	movl $0, %eax
	
ciclo:
	pushl %edi
	pushl %esi
	pushl %eax
	movw (%esi), %bx
	movw $0, x
	movw %bx, x
	call exists
	cmpl $0, %eax
	popl %eax
	popl %esi
	popl %edi
	je notDuplicated
	
	incl %edi
	addl $2, %esi
	
	cmpl num, %edi
	je end
	jmp ciclo
	
notDuplicated:
	incl %eax
	incl %edi
	addl $2, %esi
	cmpl num, %edi
	je end
	jmp ciclo

	
# epilogue
end:
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
