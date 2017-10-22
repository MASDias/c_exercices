.section .data
	.global number
	
.section .text
	.global positive
positive:
#body
	movl $0, %eax 		#limpar qualquer lixo que possa ter no registo %eax
	movl $0, %ebx 		#limpar qualquer lixo que possa ter no registo %ebx
	movl $0, %ecx 		#limpar qualquer lixo que possa ter no registo %ecx
	movl $0, %edx 		#limpar qualquer lixo que possa ter no registo %edx
	
	movl number,%eax	#guarda o numero no registo %eax
	cmpl $0,%eax 		#compara o numero com 0
	jl negative 		#se numero for inferior salta para funcao negative
	
	#Positivos
	movl $0,%edx  		
	movl $2, %esi
	divl %esi 			#divide o numero por 2
	cmpl $0,%edx 		#verifica se o resto da divisão é 0
	je positiveEven 	#salta para a função positiveEven
	
	#PositiveOdd
	movb $3, %al		
	ret
	
negative:
	movl $0,%edx
	movl $2, %esi
	divl %esi			#divide o valor em %eax por 2
	cmpl $0,%edx		#verifica se o resto da divisão é 0
	je negativeEven		#salta para a função negativeEven
	
	#NegativeOdd
	movl $4, %eax
	ret	
	
positiveEven:
	movl $1, %eax
	ret
	
negativeEven:
	movl $2, %eax
	ret
