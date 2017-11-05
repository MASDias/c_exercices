.section .data

.global ptrgrades
.global num

.section .text
.global frequencies
frequencies:
#prologue
	pushl %esi
	pushl %ebp
	movl %esp, %ebp
#body
	movl $0, %ebx
	movl $0, %eax
	movl $ptrgrades, %esi		#declara o apontador de ptrvec a esi 
sum:
	cmpl num, %ebx			#verifica se vetor acabou
	je end			#acaba o ciclo caso seja igual ao num
	cmpl $0, (%esi)		#verifica se e abaixo da nota minima
	jl invalid				#salta para negative caso numero seja menor que zero
	cmpl $20, (%esi)		#verifica se e acima da nota maxima
	jg invalid
	movl (%esi), %ecx
	incl ptrfreq(,%ecx,4)
	addl (%esi), %eax
	addl $4, %esi			#passa à proxima posicao do vetor
	incl %ebx				#incrementa no loop
jmp sum			#volta ao inicio do loop
invalid:
	movl $-1, (%esi)
	addl $4, %esi			#passa à proxima posicao do vetor
	incl %ebx				#incrementa no loop
jmp sum
end:
#epilogue
	movl %ebp, %esp
	popl %ebp
	popl %esi
ret
