.section .data
	.global ptr
	.global num
	.global x
	
.section .text
	.global exists
	
exists:
#prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
	
#body
	movl ptr, %esi
	movl num, %ecx
	movw x, %dx
	movl $0, %edi
	movl $0, %eax
	
ciclo:
	cmpw %dx, (%esi)
	je contador

	cmpl $2, %edi
	je return

	addl $2, %esi
	loop ciclo
	jmp end

contador:
	incl %edi
	addl $2, %esi
	loop ciclo
	
return:
	movl $1, %eax
	jmp end
	
# epilogue
end:
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
