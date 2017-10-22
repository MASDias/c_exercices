.section .data
	.global code
	.global salary
codManager:
	.int 101
codEngineer:
	.int 102
codTechnician:
	.int 103
	
.section .text
	.global salaryRaise
	
salaryRaise:
	movl code, %edx					#guarda o código no registo %edx
	movl salary, %eax				#guarda o salário no registo %eax
	
	cmpl codManager, %edx 			#verifica se o código é de um gerente
	je manager						#salta para a função manager caso seja gerente
	cmpl codEngineer, %edx 			#verifica se o código é de um engenheiro
	je engineer						#salta para a função engineer caso seja engenheiro
	cmpl codTechnician, %edx 		#verifica se o código é de um técnico
	je technician 					#salta para a função technician caso seja um técnico
	
	addl $50 , %eax					#no caso do código não ser de nenhum dos postos anteriores, acrescenta 50 ao salário.
	ret	
	
manager:
	addl $100, %eax					#acrescenta 100 ao salário
	ret

engineer:
	addl $200, %eax					#acrescenta 200 ao salário
	ret		

technician:
	addl $150, %eax					#acrescenta 150 ao salário
	ret
