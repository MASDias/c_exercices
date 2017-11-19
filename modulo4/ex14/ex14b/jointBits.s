.section .data

.section .text
.global jointBits
jointBits:
#prologue
	pushl %ebp
	movl %esp, %ebp
	pushl %ebx
	#pushl %esi
	#pushl %edi
#body
	movl $0, %eax
	movl $0b1, %ebx
	rorl %ebx
	movl $31, %edx
	subl 16(%ebp), %edx
shifts_loop:
	cmpl %edx, %eax
	je alterBit
	sarl %ebx
	incl %eax
jmp shifts_loop

	alterBit:
	movl $0b11111111111111111111111111111111, %edx
	xorl %ebx, %edx
	movl 8(%ebp), %eax
	andl %edx, %eax
	movl 12(%ebp), %edx
	andl %ebx,%edx
	addl %edx,%eax 
end:
#epilogue
	#popl %edi
	#popl %esi
	popl %ebx
	movl %ebp, %esp
	popl %ebp
ret
