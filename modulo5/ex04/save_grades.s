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
	movl $0, %ecx					#inicializar o indice para o ciclo
	movl 8(%ebp), %esi				#endereçar esi com a struct de estudante
	movl 12(%ebp), %edi				#endereçar edi com o vetor de grades
grades_loop:
	cmpl $10,%ecx					#verificação de fim do ciclo
	je end							
	movl (%edi,%ecx,4), %edx		#dar ao registo %edx o valor correspondente a posicao %ecx 
	movl %edx, 8(%esi,%ecx,4)		#mover a nota que esta no registo %edx para a struct que esta no registo %esi, com o offset de 8 na podicao %ecx
	incl %ecx						#incrementar contador
jmp grades_loop
end:
#epilogue
	popl %edi
	popl %esi
	#popl %ebx
	movl %ebp, %esp
	popl %ebp
ret
