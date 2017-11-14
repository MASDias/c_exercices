.section .data

.section .text
.global countBits
countBits:
#prologue
	pushl %ebp
	movl %esp, %ebp
	#pushl %ebx
	#pushl %esi
	#pushl %edi
#body
	movl 8(%ebp), %edx
	movl $0, %eax
counter_loop:
	cmpl $0, %edx
	je end
	shrl $1, %edx
	jc increment
jmp counter_loop
increment:
	incl %eax
	jmp counter_loop
end:	
#epilogue
	#popl %edi
	#popl %esi
	#popl %ebx
	movl %ebp, %esp
	popl %ebp
ret
