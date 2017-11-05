.section .data
	.global ptrdest
	.global num
	
.section .text
	.global sort_without_reps
	
sort_without_reps:
#prologue
	pushl %ebp # save previous stack frame pointer
	movl %esp, %ebp # the stack frame pointer for sum function
#body
	call copy_without_reps		#copying values in vec to vec2 without reps
	pushl %edi
	pushl %esi
	pushl %edx
	pushl %ecx
	pushl %ebx
	pushl %eax
	call arraySort				#ordering vec2 elements in ascending order
	popl %eax
	popl %ebx	
	popl %ecx
	popl %edx
	popl %esi
	popl %edi
# epilogue
end:
	movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
	popl %ebp # restore the previous stack frame pointer
ret
