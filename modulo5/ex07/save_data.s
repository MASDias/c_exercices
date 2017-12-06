.section .data
N:
	.int 3

.section .text
.global save_data
save_data:
#prologue
	pushl %ebp
	movl %esp, %ebp
	pushl %ebx
	pushl %esi
	pushl %edi
#body
	movl 8(%ebp), %esi			#Apontador para estrutura s2
	movl 12(%ebp), %edi			#Vetor de shorts passado por parametro
	
	movl $0, %ebx				#Limpar ebx para servir como parametro
ciclo:
	cmpl N, %ebx				#Se já tiverem sido percorridos todos os elementos do vetor, salta para next
	je next
	
	movw (%edi,%ebx,2), %cx		#Guarda o valor do vetor em edi de indice ebx em cx
	movw %cx, (%esi,%ebx,2)		#Guarda o valor de cx na estrutura s2, sem offset pois o vetor de shorts é o primeiro elemento da estrutura
	
	incl %ebx					#Incrementa o contador/indice
	
	jmp ciclo
	
next:
	movl 16(%ebp), %ebx			#Guarda o 3º valor passado por parametro em ebx
	movl %ebx, 8(%esi) 			#Guarda o valor de ebx na estrutura com offset 8, que corresponde a j da estrutura
	
	movl 20(%ebp), %eax			#Guarda o 4º valor passado por parametro em eax
	movl $0, %ebx				#Limpar ebx para servir de novo como contador/indice
	
ciclo2:
	cmpl N, %ebx				#Se já tiverem sido percorridos todos os elementos do vetor, salta para o fim
	je end
	
	movb (%eax,%ebx,1), %cl		#Guarda o valor do vetor em eax de indice ebx em cl
	movb %cl, 12(%esi,%ebx,1)	#Guarda o valor de cl na estrutura s2, com offset 12, local da memória ocupada pelo vetor de chars da estrutura
	
	incl %ebx					#Incrementa o contador/indice
	
	jmp ciclo2	

end:
#epilogue
	popl %edi
	popl %esi
	popl %ebx
	movl %ebp, %esp
	popl %ebp
ret
