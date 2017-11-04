.section .data

.section .text
.global vecAvg
vecAvg:
#prologue
	pushl %ebp
	movl %esp, %ebp
#body
	
	call vecSum			#chama a funcao de soma do vetor

	movl $0, %edx		#limpa registo edx para o calculo da media
	idivl num			#media da soma
#epilogue
	movl %ebp, %esp
	popl %ebp
ret

