.section .data

.global ptr1

.section .text
.global spaceCount
spaceCount:
#prologue
	pushl %ebp
	pushl %esi
	movl %esp, %ebp
#body
	movl ptr1, %esi	#apontar memoria de ptr1 a %esi 
	movl $0, %eax 		#contador de espaços
loop_cnt:
	cmpb $0, (%esi)
	jz end_loop
	cmpb $' ', (%esi)
	je incrementar
	incl %esi
	jmp loop_cnt
incrementar:
	incl %eax
	incl %esi
	jmp loop_cnt
end_loop:
#epilogue
	movl %ebp, %esp
	popl %esi
	popl %ebp
ret
