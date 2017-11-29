.section .data

.section .text
	.global find_greater
	#int find_greater(Student *s, int minimum, int *greater_grades);
find_greater:
#prologue
	pushl %ebp
	movl %esp, %ebp
	
#backup registos callee save
	pushl %ebx
	pushl %esi
	pushl %edi
	
#body
	movl 8(%ebp), %esi				#Structure student
	movl 12(%ebp), %ecx				#Valor de nota minimo
	movl 16(%ebp), %edi				#Apontador para vetor que vai ser preenchido
	
	addl $12, %esi
	movl $10, %edx
	movl $0, %eax
ciclo:
	cmpl $0, %edx
	je end

	cmpl %ecx, (%esi)
	jg greater
	
	decl %edx
	addl $4, %esi
	
	jmp ciclo
	
greater:
	movl (%esi), %ebx
	movl %ebx, (%edi)
	
	addl $4, %esi
	addl $4, %edi
	
	incl %eax
	decl %edx
	
	jmp ciclo
	
end:
#restauro registos callee save
	popl %edi
	popl %esi
	popl %ebx
	
#epilogue
	movl %ebp, %esp
	popl %ebp
ret


