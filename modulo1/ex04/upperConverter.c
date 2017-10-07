#include <stdio.h>

void convert_to_upper(char* str){
	
	int i;
	
	//Percorre a string
	for (i = 0; str[i] != '\0'; i++)
	{
		//Se o caractere encontrado na posição atual estiver entre 'a' e 'z' da tabela ASCII, converte a letra para maiúscula.
		if(str[i] >= 'a' && str[i] <= 'z'){
			//Segundo a tabela ASCII, subtraindo 32 a uma letra minúscula, obtém-se a correspondente letra maiúscula.
			str[i] = str[i] - 32;
		}
	}
	
	printf("\nConverted String: %s\n", str);
}
