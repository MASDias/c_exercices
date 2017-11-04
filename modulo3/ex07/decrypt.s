.section .data

.global ptr1

.section .text
.global decrypt
decrypt:
#prologue
	pushl %esi
	pushl %ebp
	movl %esp, %ebp
#body
	call encrypt
	movl ptr1, %esi
	
	movl $0, %edx
check_loop:
	cmpb $0, (%esi)		#verifica se a string acabou
	jz end
	cmpb $'a', (%esi) 	#compara se o caracter e 'a'
	je not_encrypt
	cmpb $' ',(%esi)	#compara se o caracter e 'espaço'
	je not_encrypt
	jmp new_char
not_encrypt:
	incl %esi			#passa à proxima letra
	jmp check_loop
new_char:
	subb $1, (%esi)
	incl %eax
	incl %esi
	jmp check_loop
end:
#epilogue
	movl %ebp, %esp
	popl %ebp
	popl %esi
ret
