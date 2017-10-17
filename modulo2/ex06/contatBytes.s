.section .data
	.global contatByte1
	.global contatByte2
.section .text
.global contatBytes # short contatBytes(void)
contatBytes:
#prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
	mov contatByte1, %ah # da ao registo %ah, o valor de "contatByte1" (Instrução sem "l" para instruções de menos de 32 bit)
	mov contatByte2, %al # da ao registo %al, o valor de "contatByte2" (agora o registo %ax, agora tem o valor contatenado de contatByte1 e contatByte2 
# epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
