.section .data

.global ptrvec

.section .text
.global greater10
greater10:
#prologue
	pushl %esi
	pushl %ebp
	movl %esp, %ebp
#body
	movl $0,%eax
	movl $0, %ebx
	movl $ptrvec, %esi		#declara o apontador a esi 
check_loop:
	cmpl num, %ebx			#verifica se vetor acabou
	je end					#acaba o ciclo caso seja igual ao num
	cmpl $10, (%esi)		#verifica se e maior que 10
	jge greater				#salta para greater caso seja maior ou igual a 10
	addl $4, %esi			#passa à proxima posicao do vetor
	incl %ebx				#incrementa no loop
	jmp check_loop			#volta ao inicio do loop
greater:
	addl $4, %esi			#passa à proxima posicao do vetor
	incl %ebx				#incrementa no loop
	incl %eax				#incrementa no contador
jmp check_loop				#volta ao inicio do loop
end:
#epilogue
	movl %ebp, %esp
	popl %ebp
	popl %esi
ret
