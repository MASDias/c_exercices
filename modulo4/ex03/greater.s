.section .data

.section .text
	.global greater
	
greater:
#prologue
	pushl %ebp
	movl %esp, %ebp
	pushl %ebx
	pushl %esi
	pushl %edi
	
#body
	movl 8(%ebp), %ebx
	movl 12(%ebp), %ecx
	movl 16(%ebp), %esi
    
	cmpl %ebx, %ecx
	jg biggest1
	jl lowest
	 
biggest1:
	movl %ecx, %eax
	cmpl %ecx, %esi
	jg biggest2
	jmp end
	
lowest:
	movl %ebx, %eax
	cmpl %ebx, %esi
	jg biggest2
	jmp end
	
biggest2:
	movl %esi, %eax
	jmp end
	 
end:
#epilogue
	popl %edi
	popl %esi
	popl %ebx
	movl %ebp, %esp
	popl %ebp
ret

