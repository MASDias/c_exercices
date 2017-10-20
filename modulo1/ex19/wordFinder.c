#include <stdio.h>

int wordSize(char* word){
	int i = 0;
	
	while(word[i] != '\0'){
		i++;
	}	
	return i;
}

char* find_word(char* str, char* word, char* initial_addr){
	int j = 0;
	int i = 0;
	int size = wordSize(word);//determina tamanho da palavra desejada
	while (str+i != initial_addr){//determina onde esta "initial_addr" para começar a procura
		i++;//incrementa para saber a posição inicial do "initial_addr"
	}
	for (; str[i]!= '\0'; i++){//ciclo para percorrer string "str"
		if (word[j] == str[i]){//verifica se a actual letra da "str[i]" e a mesma que word[0]
			//guarda temporariamente posição caso a letra seja a mesma para fazer uma comparação com a restante palavra
			int temp = i;
			//vai verificar se a "str[temp]" e "word[j]" sao a mesma palavra 
			while (word[j] == str[temp]){
				//condição para caso a palavra que estamos a procurar é a ultima de "str"
				if (str[temp]=='\0'){
					//se for a ultima, para nao contabilizar '\0' faz-se um "break;" para poder para o circulo
					break;
				}
				temp++; //incrementos de "temp" enquanto condição "while" true
				j++; //incrementos de "j" enquanto condição "while" true	
			}
			if (j == size){//verifica se apos condição "while", "j" e do mesmo ttamanho que size
				return str+i;//caso verdade, encontrou palavra desejada e retorna o seu endereço 
			} else {
				j = 0;//senao, volta a reiniciar "j" para fazer outra verificação
			}			
		}
	}
	return NULL;//null caso "word" nao exista
	
}
