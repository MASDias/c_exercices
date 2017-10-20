.section .data
	.global s1
	.global s2
.section .text
.global crossSumBytes # int crossSumBytes()
crossSumBytes:
#prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
#body
	movl $0, %eax #limpa lixo que possa estar no registo de %eax
	movl $0, %ebx #limpa lixo que possa estar no registo de %ebx
	movl s1, %eax #atribui ao registo %eax o valor de s1
	movl s2, %ebx #atribui ao registo de %ebx o valor de s2
	addb %bh, %al #adiciona o byte mais significativo de s2 ao byte menos significativo de s1 
	addb %bl, %ah #adiciona o byte menos significativo de s2 ao byte mais significativo de s1
#epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
