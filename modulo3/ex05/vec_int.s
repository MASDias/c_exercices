.section .data

.global vecptr
.global num

.section .text
.global vec_int
vec_int:
#prologue
	pushl %ebp
	movl %esp, %ebp
#body
	movl $0, %ebx
	movl $vecptr, %eax
plus_one_loop:
	cmpl num, %ebx
	jz end_plus_one_loop
	incl (%eax)
	addl $4, %eax
	incl %ebx
jmp plus_one_loop

end_plus_one_loop:
#epilogue
	movl %ebp, %esp
	popl %ebp
ret
