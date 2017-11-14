.section .data

.section .text
.global countBitsVec
countBitsVec:
#prologue
	pushl %ebp
	movl %esp, %ebp
	
	#pushl %ebx
	pushl %esi
	#pushl %edi
#body
	movl 8(%ebp), %esi
	movl $0, %ecx
	
	movl $0, %eax
vec_loop:
	cmpl 12(%ebp), %ecx
	je end
	movl (%esi,%ecx,4), %edx 
counter_loop:
	cmpl $0, %edx
	je end_in_loop
	shrl $1, %edx
	jc increment
jmp counter_loop
increment:
	incl %eax
	jmp counter_loop
end_in_loop:
	incl %ecx
	
jmp vec_loop
end:	
#epilogue
	#popl %edi
	popl %esi
	#popl %ebx
	
	movl %ebp, %esp
	popl %ebp
ret
