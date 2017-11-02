.section .data
	.global x
	.global ptr
	.global num
	
.section .text
	.global vec_search
	
vec_search:
#prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
	
#body
	movl ptr, %esi
	movl num, %ecx			
	movw x, %dx				
	
iterator:						#função loop do assembly automaticamente decrementa o ecx
	cmpw %dx, (%esi)		
	je return
	
	addl $2, %esi
	loop iterator	
	movl $0, %eax
	jmp end

return:
	movl %esi, %eax
	jmp end
	
# epilogue
end:
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
