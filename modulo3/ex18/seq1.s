.section .data

.section .text
.global seq1
seq1:
#prologue
	pushl %ebp
	movl %esp, %ebp
#body
	movl $0, %eax
	incl %ebx
	cmpl %edx, (%esi,%ebx,4)
	jl end
	movl $1, %eax
end:
#epilogue
	movl %ebp, %esp
	popl %ebp
ret
