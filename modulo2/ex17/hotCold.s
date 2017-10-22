.section .data
.global current
.global desired
dec:
	.int 2
inc:
	.int 3
sec:
	.int 60
.section .text
.global hotCold # int sumIntValuesCarry(void)
hotCold:
#prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
#body
	movl $0, %eax #limpar qualquer lixo que possa ter no registo %edx (floating exception)
	movl $0, %ebx #limpar qualquer lixo que possa ter no registo %edx (floating exception)
	movl $0, %ecx #limpar qualquer lixo que possa ter no registo %edx (floating exception)
	call scanf
	movw current, %bx
	movw desired, %ax
	
	cmpw desired, %bx
	jg jmp_is_greater
	je jmp_is_equal
	jl jmp_is_less
jmp_is_greater :
	subw %ax , %bx
	movl %ebx, %eax
	movl dec, %ebx
	mul %ebx
	movl sec, %ebx
	mul %ebx
	jmp end
jmp_is_equal :
	movl $0 , %eax
	jmp end
jmp_is_less :
	subw %bx, %ax
	movl inc, %ebx
	mul %ebx
	movl inc, %ebx
	movl sec, %ebx
	mul %ebx
end :
#epilogue
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
