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

