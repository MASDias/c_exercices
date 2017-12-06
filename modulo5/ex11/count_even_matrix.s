.section .data

.section .text
.global count_even_matrix
count_even_matrix:
#prologue
	pushl %ebp
	movl %esp, %ebp
	pushl %ebx
	pushl %esi
	pushl %edi
#body
	movl 8(%ebp), %esi				#Primeiro parametro passado para a função guardado no registo esi: matriz
	movl 12(%ebp), %ebx				#Segundo parametro passado para a função guardado no registo ebx: numero de linhas da matriz
	
	imull 16(%ebp), %ebx			#Multiplicar linhas por colunas para guardar tamanho da matriz em ebx

	movl $0, %eax					#Limpar eax para servir como contador de pares
	
ciclo:
	cmpl $0, %ebx
	je end
	
	shrl (%esi, %ebx, 4)
	
	jnc par
	
	decl %ebx
	jmp ciclo

par:
	incl %eax
	decl %ebx
	jmp ciclo

end:
#epilogue
	popl %edi
	popl %esi
	popl %ebx
	movl %ebp, %esp
	popl %ebp
ret
