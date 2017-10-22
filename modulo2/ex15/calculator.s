.section .data
	.global a
	.global b
	.global operator
	plus:
	.int 1
	minus:
	.int 2
	multiplication:
	.int 3
	division:
	.int 4
	modulos:
	.int 5
.section .text
.global calculator
calculator:
#prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
#body
	movl $0, %eax #limpar qualquer lixo que possa ter no regito %eax
	movl $0, %ebx #limpar qualquer lixo que possa ter no regito %ebx
	movl $0, %ecx #limpar qualquer lixo que possa ter no regito %ecx
	movl $0, %edx #limpar qualquer lixo que possa ter no regito %edx
	movl operator, %eax
	movl operator, %ebx
	cmpl %eax, plus 
	je sum
	cmpl %eax, minus
	je sub
	cmp %eax, multiplication
	je mult
	cmp %eax, division
	je divi
	cmp %eax, modulos
	je mod
	jmp end
mult:
	movl a, %eax
	movl b, %ebx
	mul %ebx
	jmp end
sum:
	movl a, %eax
	addl b, %eax
	jmp end
sub:
	movl a, %eax
	subl b, %eax
	jmp end
divi:
	movl a, %eax
	movl b, %ebx
	divl %ebx
	jmp end
mod:
	movl a, %eax
	cmpl $0, %eax
	jl neg
	jmp end
neg:
	imul $-1, %eax
	jmp end
end:
# epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
