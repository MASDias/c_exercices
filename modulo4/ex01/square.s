.section .data

.section .text
	.global square
	
square:
#prologue
	pushl %ebp
	movl %esp, %ebp
	pushl %ebx
	#pushl %esi
	#pushl %edi
#body
	movl 8(%ebp), %ebx			#guarda o parametro que está na stack no registo ebx
	movl %ebx, %eax				#copia o valor do parametro para o registo eax
	imull %ebx, %eax			#efetua o quadrado do numero passado por parametro
end:
#epilogue
	#popl %edi
	#popl %esi
	popl %ebx
	movl %ebp, %esp
	popl %ebp
ret

