.section .data

.global vecptr
.global num

.section .text
.global countSeq
countSeq:

#prologue
	pushl %esi
	pushl %ebp
	movl %esp, %ebp
	pushl num
#body
	movl $0, %ecx
	movl $0, %ebx
	pushl num
	subl $3, num
	movl $vecptr, %esi		#declara o apontador de ptrvec a esi 
seq_loop:
	cmpl num, %ebx			#verifica se vetor acabou
	je end					#acaba o ciclo caso seja igual ao num
	
	pushl %ebx				#guarda a posição do ciclo 
	
	movl (%esi), %edx		#guarda termo de comparação
	call seq1				#chama funcao seq 1 , que verifica 'v(i) < v(i+1)'
	cmp $1, %eax
	jne next_it				#se é diferente de 1, entao passa a proxima iteração

	movl (%esi,%ebx,4), %edx
	call seq2
	cmp $1, %eax
	je inc
	
next_it:					#proxima iteração
	popl %ebx
	addl $4, %esi			#passa à proxima posicao do vetor
	incl %ebx				#incrementa no loop
jmp seq_loop				#volta ao inicio do loop
inc:
	incl %ecx
	popl %ebx
	addl $4, %esi			#passa à proxima posicao do vetor
	incl %ebx				#incrementa no loop
	jmp seq_loop
end:
	movl %ecx, %eax
#epilogue
	popl num
	movl %ebp, %esp
	popl %ebp
	popl %esi
ret
