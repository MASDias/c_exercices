.section .data
	.global i
	.global j
	.global h
	.global g
	.global r
	
.section .text

#FUNÇÃO F
	.global f
f:
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
	
	movl i,%edx
	movl j,%ecx
	cmpl %edx, %ecx
	jne fElse 
	
fIf:
	subl %edx,%ecx
	movl %ecx,h
	movl h,%eax
	jmp end
	
fElse:
	add %edx,%ecx
	mov %ecx,h
	movl h,%eax
	jmp end
 
#FUNÇÂO F2
	.global f2

f2:
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
	
	movl i,%edx
	movl j,%ecx
	cmpl %ecx, %edx
	jge f2Else

f2If:
	add $1,%edx
	jmp multiplicacao
	
f2Else:
	add $1,%ecx
	jmp multiplicacao
	
multiplicacao:
	movl %edx,%eax
	mull %ecx
	movl %eax, h
	movl h, %eax
	jmp end	
	
#FUNÇÂO F3
	.global f3	
	
f3: 
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function

	movl i, %edx
	movl j, %ecx
	cmpl %ecx, %edx
	jl f3Else
	
f3If:
	add %edx,%ecx
	movl %ecx, %eax
	movl %eax,h
	
	add $1,%edx
	movl %edx, g
	jmp divide3

f3Else:
	movl %ecx, %eax
	mull %edx
	movl %eax, h

	addl i, %ecx
	addl $2, %ecx
	movl %ecx, g
	jmp divide3

divide3:
	movl h, %eax
	movl g, %edi
	movl $0, %edx
	divl %edi
	jmp end

#FUNÇÂO F4
	.global f4
	
f4:
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
	
	movl i, %edi
	addl j, %edi
	cmpl $10, %edi
	jle f4Else

f4If:
	movl i, %eax
	movl $2, %esi
	mull %esi
	movl %eax,h
	jmp end

f4Else:
	movl j, %eax
	movl $0, %edx
	
	movl $3,%ecx
	divl %ecx
	
	movl %ecx,%eax
	movl %eax, h
	jmp end
	
end:
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
