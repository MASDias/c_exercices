.section .data

.section .text
.global save_grades
save_grades:
#prologue
	pushl %ebp
	movl %esp, %ebp
	#pushl %ebx
	pushl %esi
	pushl %edi
#body
	movl $0, %ecx
	movl 8(%ebp), %esi
	movl 12(%ebp), %edi
	addl $8, %esi
grades_loop:
	cmpl $10,%ecx
	je end
	movl (%edi), %edx
	movl %edx, (%esi)
	incl %ecx
	addl $4, %esi
	addl $4, %edi
jmp grades_loop
end:
#epilogue
	popl %edi
	popl %esi
	#popl %ebx
	movl %ebp, %esp
	popl %ebp
ret
