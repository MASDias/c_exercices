.section .data
	.global a
	.global b
	.global c
	.global d
.section .text
.global sumDiferentBits
sumDiferentBits:
#prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
#body
	movl $0, %eax #limpar qualquer lixo que possa ter no regito %eax
	movl $0, %ebx #limpar qualquer lixo que possa ter no regito %ebx
	movl $0, %ecx #limpar qualquer lixo que possa ter no regito %ecx
	movl $0, %edx #limpar qualquer lixo que possa ter no regito %edx
	
	movw b, %cx #atribuir ao registo %cx, o valor guardado em b, um short que tem 2 bytes
	movl d, %eax #atribuir ao registo %eax, o valor guardado em b, um int que tem 4 bytes
	
	addb a, %cl #somar "a" a %ecx A + B
	subw c, %cx #subtrair ao %edx o valor do registo em %ecx A + B - C
	addl %ecx, %eax #somar ao %eax o valor de %eax

# epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
