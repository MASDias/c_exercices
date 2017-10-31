.section .data
	.global i
	.global j
	.global h
	.global g
	.global r
	
.section .text

#FUNÇÃO F
	.global f
f:
	pushl %ebp 			# save previous stack frame pointer
	movl %esp, %ebp 	# the stack frame pointer for sum function
	
	movl i,%edx			#guarda i no registo edx
	movl j,%ecx			#guarda j no registo ecx
	cmpl %edx, %ecx		#compara i com j
	jne fElse 			#caso não sejam iguais, salta para o else
	
fIf:
	subl %edx,%ecx		#subtrai i a j
	movl %ecx,h			#guarda resultado em h
	movl h,%eax			
	jmp end				#salta para o fim que retorna eax
	
fElse:
	add %edx,%ecx		#soma i com j
	mov %ecx,h			#guarda o resultado em h
	movl h,%eax			
	jmp end				#salta para o fim que retorna eax
 
#FUNÇÂO F2
	.global f2

f2:
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
	
	movl i,%edx			#guarda i no registo edx
	movl j,%ecx			#guarda j no registo ecx
	cmpl %ecx, %edx		#compara i com j
	jge f2Else			#caso i seja maior do que j salta para o else

f2If:
	add $1,%edx			#adiciona 1 a i
	jmp multiplicacao	#salta para a multiplicacao
	
f2Else:
	add $1,%ecx			#adiciona 1 a j
	jmp multiplicacao	#salta para a multiplicacao
	
multiplicacao:			#método para realizar a multiplicacao
	movl %edx,%eax		
	mull %ecx			#multiplica i por j
	movl %eax, h		#guarda o valor em h
	movl h, %eax		
	jmp end				#salta para o fim que retorna eax
	
#FUNÇÂO F3
	.global f3	
	
f3: 
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function

	movl i, %edx		#guarda i no registo edx
	movl j, %ecx		#guarda j no registo ecx
	cmpl %ecx, %edx		#compara i com j
	jl f3Else			#caso j seja menor que i, salta para o else
	
f3If:
	add %edx,%ecx		#soma i com j
	movl %ecx, %eax		#guarda o resultado da soma em eax
	movl %eax,h			#guarda o valor em h
	
	add $1,%edx			#soma 1 a i
	movl %edx, g		#guarda o resultado da soma em g
	jmp divisao			#salta para a divisao

f3Else:
	movl %ecx, %eax		
	mull %edx			#multiplica i com j
	movl %eax, h		#guarda o valor em h

	addl i, %ecx		#soma i com j
	addl $2, %ecx		#soma 2 ao resultado da soma anterior
	movl %ecx, g		#guarda o resultado em g
	jmp divisao			#salta para a divisao

divisao:
	movl h, %eax		
	movl g, %edi
	movl $0, %edx		#repõe o valor de edx a 0 para não haver conflitos de resto da divisao
	divl %edi			#divide h por g
	jmp end				#salta para o fim que retorna eax

#FUNÇÂO F4
	.global f4
	
f4:
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
	
	movl i, %edi		#guarda i no registo edx
	addl j, %edi		#soma j a i
	cmpl $10, %edi		#compara 10 com a soma anterior
	jle f4Else			#caso o resultado da soma seja menor ou igual a 10, salta para o else

f4If:
	movl i, %eax		#guarda o valor de i em %eax
	movl $2, %esi		#guarda o valor 2 em %esi para futura multiplicação
	mull %esi			#multiplica 2 com i
	movl %eax,h			#guarda o valor do resultado anterior em h
	jmp end				#salta para o fim que retorna eax

f4Else:
	movl j, %eax		#guarda o valor de j em eax
	movl $0, %edx		#repõe edx a 0
		
	movl $3,%ecx		#guarda o valor 3 em ecx
	divl %ecx			#divide j por 3
		
	movl %eax, h		#guarda o resultado da divisao anterior em h
	jmp end				#salta para o fim que retorna eax
	
end:
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
