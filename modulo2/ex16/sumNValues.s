.section .data
	.global a
	.global b
	n:
	.int 15
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
	
	movl a, %eax
	movl i, %ecx
	movl b, %ebx
	divl %ebx
	movl $0, %ebx
my_loop:
	cmpl n, %ecx #verificar se o limite é menor que o indice
	jge end_loop #caso flag de j if greater or equal seja activada salta para end_loop
	mul %ecx #multiplica ecx por eax
	incl %ecx #incrementa contador
	addl %eax, %ebx #incrementa o resultado para o somatorio total 
jmp my_loop
end_loop:
	movl %ebx, %eax #devolve somatario para eax
# epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
