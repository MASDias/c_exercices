.section .data

.section .text
	.global change_address
	
change_address:
#prologue
	pushl %ebp
	movl %esp, %ebp
	
#backup registos callee save
	pushl %ebx
	pushl %esi
	pushl %edi
	
#body

	movl $0, %ecx
	
	movl 8(%ebp), %eax			#Apontador para a estrutura student
	movl 12(%ebp), %ecx			#Address para substituir na estrutura student
	
	addl $128, %eax				#Apontador com offset 128 bits para address na estrutura student
	
ciclo: 
	cmpl $0, (%ecx)				#Verificar se já chegou ao fim da string para sair
	je end
	
	movb (%ecx), %edx
	movb %dl, (%eax)			
	incl %ecx
	incl %eax
	jmp ciclo
	
end:
#restauro registos callee save
	popl %edi
	popl %esi
	popl %ebx
	
#epilogue
	movl %ebp, %esp
	popl %ebp
ret


