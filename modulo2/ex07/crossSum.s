.section .data
	.global s1
	.global s2
.section .text
.global crossSumBytes # int crossSumBytes()
crossSumBytes:
#prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
#body
	movl $0, %eax #limpa lixo que possa estar no registo de %eax
	movl $0, %ebx #limpa lixo que possa estar no registo de %ebx
	movw s1, %ax #atribui ao registo %eax o valor de s1
	movw s2, %bx #atribui ao registo de %ebx o valor de s2
	addb %bh, %al #adiciona o byte mais significativo de s2 ao byte menos significativo de s1 
	addb %bl, %ah #adiciona o byte menos significativo de s2 ao byte mais significativo de s1
#epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret


.section .data
	.global contatByte1
	.global contatByte2
.section .text
.global contatBytes # short contatBytes(void)
contatBytes:
#prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
#body
	movb contatByte1, %ah # da ao registo %ah, o valor de "contatByte1" 
	movb contatByte2, %al # da ao registo %al, o valor de "contatByte2"
# epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret


.section .data
	.global swapper
.section .text
.global swap # short swap(void)
swap:
#prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
#body
	movl $0, %eax #limpar registo
	movl $0, %ebx
	movw swapper, %ax # gives the value of swapper to %ax
	movb %ah, %bl #os bits mais significativos a %bl
	movb %al, %bh #os bits menos significativos para %bh
	movw %bx, %ax #agora que foi trocado os bits, declara %bx em %ax, dando um novo  valor com a inversão de bits
# epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
