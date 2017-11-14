.section .data

.section .text

.global testEqual
testEqual:
#prologue
	pushl %ebp
	movl %esp, %ebp
	#pushl %ebx
	pushl %esi
	pushl %edi
#body
	movl 8(%ebp), %esi
	movl 12(%ebp), %edi
	movl $0, %ecx
	movw $0, %dx
	movl $1, %eax
test_loop:
	cmpb $0, (%esi)
	je end
	movb (%edi), %dl
	cmpb (%esi), %dl
	jne not_equal
	incl %esi
	incl %edi
jmp test_loop
not_equal:
	movl $0, %eax
end:	
#epilogue
	popl %edi
	popl %esi
	#popl %ebx
	
	movl %ebp, %esp
	popl %ebp
ret
