.section .data

.section .text
.global save_data
save_data:
#prologue
	pushl %ebp
	movl %esp, %ebp
	#pushl %ebx
	pushl %esi
	#pushl %edi
#body
	movl 8(%ebp), %esi
	
	movl 12(%ebp), %eax				#mover para registo %eax o valor do primeiro parametro da funcao
	movl %eax, (%esi)				#mover o valor do registo %eax para a primeira variavel da struct 
	movb 16(%ebp), %al				#mover para registo %eax o valor do segundo parametro da funcao
	movb %al, 4(%esi)				#mover o valor do registo %eax para a segunda variavel da struct, a 4 bits da primeira 
	movl 20(%ebp), %eax				#mover para registo %eax o valor do terceiro parametro da funcao
	movl %eax, 8(%esi)				#mover o valor do registo %eax para a terceira variavel da struct, depois do char, tem um offset de 3 bits, logo começa no bit 8 
	movb 24(%ebp), %al				#mover para registo %eax o valor do quarto parametro da funcao
	movb %al, 12(%esi)				#mover o valor do registo %eax para a quarta variavel da struct, sem offset do int anterior, logo no bit 12
end:
#epilogue
	#popl %edi
	popl %esi
	#popl %ebx
	movl %ebp, %esp
	popl %ebp
ret
