.section .data

.section .text
	.global calc
	
calc:
#prologue
	pushl %ebp
	movl %esp, %ebp
	pushl %ebx
	pushl %esi
	pushl %edi
#body
	movl 8(%ebp), %ebx         	#a
	movl 12(%ebp), %esi			#b
	movl 16(%ebp), %edx			#c
	
	subl %ebx, (%esi)
	movl (%esi), %eax
	imull %edx
	
end:
#epilogue
	popl %edi
	popl %esi
	popl %ebx
	movl %ebp, %esp
	popl %ebp
ret

