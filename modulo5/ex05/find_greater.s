.section .data

.section .text
	.global find_greater
	#int find_greater(Student *s, int minimum, int *greater_grades);
find_greater:
#prologue
	pushl %ebp
	movl %esp, %ebp
	
#backup registos callee save
	pushl %ebx
	pushl %esi
	pushl %edi
	
#body
	movl 8(%ebp), %esi				#Apontador para estrutura student passado por parametro
	movl 12(%ebp), %ecx				#Valor de nota minimo passado por parametro
	movl 16(%ebp), %edi				#Apontador passado por parametro para vetor que vai ser preenchido
	
	addl $12, %esi					#Avançar apontador da estrutura para o principio do vetor grades
	movl $10, %edx					#Usar edx como valor a decrementar para saida da função
	movl $0, %eax					#Limpar %eax para servir de contador de valores adicionados
ciclo:
	cmpl $0, %edx					#No caso de edx já tiver sido decrementado até 0, sai da função
	je end

	cmpl %ecx, (%esi)				#Compara valor apontado por vetor com o valor minimo
	jg greater						#Se valor apontado for superior ao minimo, salta para greater
	
	decl %edx						
	addl $4, %esi					#Avança esi para valor seguinte
	
	jmp ciclo
	
greater:
	movl (%esi), %ebx				#Guarda valor apontado em ebx
	movl %ebx, (%edi)				#Copia valor em ebx para apontador do novo vetor
	
	addl $4, %esi					#Avança esi para o proximo valor
	addl $4, %edi					#Avança edi
	
	incl %eax						
	decl %edx
	
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


