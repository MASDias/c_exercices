.section .data
	.global a
	.global b
	.global c
	.global d
.section .text
.global sumDiferentBits # short contatBytes(void)
sumDiferentBits:
#prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
#body
	movl $0, %eax #limpar qualquer lixo que possa ter no regito %eax
	movl $0, %ebx #limpar qualquer lixo que possa ter no regito %ebx
	movl $0, %ecx #limpar qualquer lixo que possa ter no regito %ecx
	movl $0, %edx #limpar qualquer lixo que possa ter no regito %edx
	
	movb a, %bl #atribuir ao registo %bl, o valor guardado em a, um char que tem 1 byte
	movw b, %cx #atribuir ao registo %cx, o valor guardado em b, um short que tem 2 bytes
	movl c, %edx #atribuir ao registo %edx, o valor guardado em b, um int que tem 4 bytes
	movl d, %eax #atribuir ao registo %eax, o valor guardado em b, um int que tem 4 bytes
	
	addl %ebx, %ecx #somar %ebx a %ecx
	subl %edx, %ecx #subtrair ao %edx o valor do registo em %ecx
	addl %ecx, %eax #somar ao %eax o valor de %eax

# epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
