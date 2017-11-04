.section .data

.global ptrvec
.global num


.section .text
.global vecFill
vecFill:
#prologue
	pushl %esi
	pushl %ebp
	movl %esp, %ebp
#body
	movl $0, %ebx
	movl $ptrvec, %esi		#declara o apontador de ptrvec a esi 
check_loop:
	cmpl num, %ebx			#verifica se vetor acabou
	je end					#acaba o ciclo caso seja igual ao num
	cmpl $0, (%esi)			#verifica se e negativo
	jl negative				#salta para negative caso numero seja menor que zero
	addl $4, %esi			#passa à proxima posicao do vetor
	incl %ebx				#incrementa no loop
	jmp check_loop			#volta ao inicio do loop
negative:
	movl %ebx, (%esi)
	addl $4, %esi			#passa à proxima posicao do vetor
	incl %ebx				#incrementa no loop
jmp check_loop				#volta ao inicio do loop
end:
#epilogue
	movl %ebp, %esp
	popl %ebp
	popl %esi
ret
