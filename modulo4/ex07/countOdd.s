.section .data

.section .text
	.global count_odd
	
count_odd:
#prologue
	pushl %ebp
	movl %esp, %ebp
	pushl %ebx
	pushl %esi
	pushl %edi
	
#body
	movl 8(%ebp), %esi			#moving pointer of vec to esi
	movl 12(%ebp), %ecx			#moving n of elements to ecx
	movl $0, %edx				#cleaning edx
	movl $0, %eax				#cleaning eax
	
ciclo:
	cmpl %ecx, %edx				#if edx = n elements, jumps to end
	je end
	
	shrl $1, (%esi)				#Shift to the right. If carry is activated, it jumps to impar
	jc impar
	
	incl %edx
	addl $4, %esi				#Next value of vec
	
	jmp ciclo
	
impar:							
	incl %eax
	incl %edx
	addl $4, %esi				#Next value of vec
	jmp ciclo
	
	
end:
#epilogue
	popl %edi
	popl %esi
	popl %ebx
	movl %ebp, %esp
	popl %ebp
ret

