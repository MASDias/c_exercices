.section .data

.section .text
.global activateBit
activateBit:
#prologue
	pushl %ebp
	movl %esp, %ebp
	pushl %ebx
	pushl %esi
	#pushl %edi
#body
	movl $0, %eax
	movl $0b1, %ebx
	movl 12(%ebp), %edx
	decl %edx
shifts_loop:
	cmpl %edx, %eax
	je alterBit
	shll %ebx
	incl %eax
jmp shifts_loop
alterBit:
	movl $0, %eax
	movl 8(%ebp), %esi
	movl (%esi), %ecx
	orl %ebx, %ecx
	cmpl %ecx, (%esi)
	je end
	incl %eax
end:
#epilogue
	#popl %edi
	popl %esi
	popl %ebx
	movl %ebp, %esp
	popl %ebp
ret
