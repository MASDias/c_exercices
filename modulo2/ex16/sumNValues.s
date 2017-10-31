.section .data
	.global a
	.global b
	n:
	.int 4
	i:
	.int 1
.section .text
.global sumNValues # int sumIntValuesCarry(void)
sumNValues:
#prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
#body
	movl $0, %edx #limpar qualquer lixo que possa ter no registo %edx (floating exception)
	movl $0, %eax
	movl i, %ecx
my_loop:
	cmpl n, %ecx 	#verificar se o limite é menor que o indice
	jg end_loop 	#caso flag de j if greater or equal seja activada salta para end_loop
	addl %ecx, %eax #incrementa o resultado para o somatorio total
	incl %ecx 		#incrementa contador
jmp my_loop
end_loop:
	movl a, %ecx
	mul %ecx 		#multiplica ecx por eax
	movl $0, %edx
	movl b, %ebx
	divl %ebx
# epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
