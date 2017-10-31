.section .data

.global vecptr
.global num

.section .text
.global vecSum
vecSum:
#prologue
	pushl %ebp
	movl %esp, %ebp
	pushl %esi
#body
	movl $0, %eax
	movl $0, %ebx
	movl $vecptr, %esi
sum_loop:
	cmpl num, %ebx
	je end_sum
	addl (%esi), %eax
	addl $4, %esi
	incl %ebx
jmp sum_loop
end_sum:
#epilogue
	popl %esi
	movl %ebp, %esp
	popl %ebp
ret
