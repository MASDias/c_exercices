.section .data

.section .text
.global calculate
calculate:
#prologue
	pushl %ebp
	movl %esp, %ebp
	#pushl %ebx
	#pushl %esi
	#pushl %edi
#body
	movl 8(%ebp),%eax
	addl 12(%ebp),%eax
	
	pushl %eax
	pushl 12(%ebp)
	pushl 8(%ebp)
	pushl $'+'
	call print_result 
	addl $12, %esp
	
	
	movl 8(%ebp), %edx
	imull 12(%ebp), %edx  
	
	pushl %edx
	pushl 12(%ebp)
	pushl 8(%ebp)
	pushl $'*'
	call print_result 
	addl $12, %esp
	popl %edx
	popl %eax
	subl %edx, %eax
end:	
#epilogue
	#popl %edi
	#popl %esi
	#popl %ebx
	movl %ebp, %esp
	popl %ebp
ret
