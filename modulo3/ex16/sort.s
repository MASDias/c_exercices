.section .data

.global vec2

.section .text
.global sort
sort:
#prologue
	pushl %ebp
	movl %esp, %ebp
#body 
	movl %ebx, %eax			#posicao do ciclo anterior
	incl %ebx				#inicio ndo novo ciclo
order:
	cmpl num, %ebx			#verifica se vetor acabou
	je end					#acaba o ciclo caso seja igual ao num
	addl $4, %esi			#avançar em memoria
	cmpl %edx, (%esi)		#verifica se é menor que o termo de comparacao do ciclo anterior
	jl switch				
	incl %ebx				#incrementa no loop
jmp order					#volta ao inicio do loop
switch:
	movl vec2(,%ebx,4), %edx		#guarda novo termo de comparaçao 
	pushl vec2(,%ebx,4)
	pushl vec2(,%eax,4)
	popl vec2(,%ebx,4)
	popl vec2(,%eax,4)			#troca os valores do vetor nas respetivas posições 
	incl %ebx
jmp order
end:
#epilogue
	movl %ebp, %esp
	popl %ebp
ret
