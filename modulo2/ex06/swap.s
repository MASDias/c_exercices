.section .data
	.global swapper
.section .text
.global swap # short swap(void)
swap:
#prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
	mov swapper, %ax # gives the value of swapper to %ax (Instrução sem "l" para instruções de menos de 32 bit)
	mov %ah, %bl #os bits mais significativos a %bl
	mov %al, %bh #os bits menos significativos para %bh
	mov %bx, %ax #agora que foi trocado os bits, declara %bx em %ax, dando um novo  valor com a inversão de bits
# epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
