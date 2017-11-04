.section .data

.global vec
.global num

.section .text
.global vecSum
vecSum:
#prologue
	pushl %ebp
	movl %esp, %ebp
#body
	
	movl $vecptr, %esi
	movl $0, %eax
	movl $0, %ebx
sum:
	cmpl num, %ebx
	je end_sum
	addl (%esi), %eax
	addl $4, %esi
	incl %ebx
jmp sum

end_sum:
#epilogue

	movl %ebp, %esp
	popl %ebp
ret
