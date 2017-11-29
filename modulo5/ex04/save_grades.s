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
	
grades_loop:
	cmpl $10,%ecx
	je end
	movl (%edi,%ecx,4), %edx
	movl %edx, 8(%esi,%ecx,4)
	incl %ecx
jmp grades_loop
end:
#epilogue
	popl %edi
	popl %esi
	#popl %ebx
	movl %ebp, %esp
	popl %ebp
ret
