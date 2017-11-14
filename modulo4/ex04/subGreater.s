.section .data

.section .text
.global subGreater
subGreater:
#prologue
	pushl %ebp
	movl %esp, %ebp
	pushl %ebx
	pushl %esi
	#pushl %edi
#body
	movl 16(%ebp), %esi
	
	movl 8(%ebp), %eax				#num1
	subl 12(%ebp), %eax				#subtraçao num1-num2
	movl 12(%ebp), %ebx				#num2
	cmpl 8(%ebp), %ebx 				#compara num2 com num1
	jl alocar						#se num2 menor que num1 alocar a memoria					
	jmp end		
alocar:
	movl %ebx, (%esi)				#passa o valor de num2 para o endereço correspondente a %esi
end:	
#epilogue
	#popl %edi
	popl %esi
	popl %ebx
	movl %ebp, %esp
	popl %ebp
ret
