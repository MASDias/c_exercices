.section .data

.global ptrvec
.global num


.section .text
.global arraySort
arraySort:

#prologue
	pushl %esi
	pushl %ebp
	movl %esp, %ebp
#body
	movl $ptrvec, %esi		#declara o apontador de ptrvec a esi 
	movl num, %eax
	subl $1, %eax	
	movl $0, %ebx
check_loop:
	cmpl %eax, %ebx			#verifica se vetor acabou
	je end					#acaba o ciclo caso seja igual ao num
	movl (%esi), %edx
	pushl %ebx
	pushl %eax
	pushl %esi
	call sort				#faz a troca para ordenação
	popl %esi
	popl %eax
	popl %ebx
	addl $4, %esi			#avança posição
	incl %ebx				#incrementa no loop
jmp check_loop				#volta ao inicio do loop
end:
#epilogue
	movl %ebp, %esp
	popl %ebp
	popl %esi
ret
