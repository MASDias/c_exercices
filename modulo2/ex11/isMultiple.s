.section .data
.global a
.global b

.section .text
.global isMultiple
isMultiple:
#prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
#body
	movl $0, %eax #limpar qualquer lixo que possa ter no regito %eax
	movl $0, %ecx #limpar qualquer lixo que possa ter no regito %ecx
	movl $0, %edx #limpar qualquer lixo que possa ter no regito %edx, mas com a duvida se e preciso numa operçao de divisao de 8 bits
#dividendo  %eax
	movl a, %eax
#divisor b
#divide %eax by b
#quotient in %eax
	divl b
#move o resto da divisao para %al 
	movl %edx, %eax
#atribuir zero a %ah que contem o resto da divisao, para devolver %eax corretamente
	#movl $0, %edx
# epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
