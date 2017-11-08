.section .data

.section .text
.global sumN
sumN:
#prologue
	pushl %ebp
	movl %esp, %ebp
	pushl %ebx
#body
	movl 8(%ebp), %ecx
	movl $1, %ebx			#começa contador a 1
	movl $0, %eax			#começa o valor a 0 para o somatorio
sum_loop:
	cmp %ecx, %ebx			#verifica fim de ciclo
	jg end					#verifica se ciclo acabou
	addl %ebx, %eax			#soma a eax o valor do contador
	incl %ebx				#soma contador
jmp sum_loop
end:	
#epilogue
	popl %ebx
	movl %ebp, %esp
	popl %ebp
ret
