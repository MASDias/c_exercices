.section .data

.section .text
	.global dec_cube
	
dec_cube:
#prologue
	pushl %ebp
	movl %esp, %ebp
	pushl %ebx
	pushl %esi
	pushl %edi
	
#body
	movl 12(%ebp), %ecx
	movl 8(%ebp), %ebx
    movl %ecx, %eax
    imull %ecx
    imull %ecx
	decl (%ebx)
	
	
end:
#epilogue
	popl %edi
	popl %esi
	popl %ebx
	movl %ebp, %esp
	popl %ebp
ret

