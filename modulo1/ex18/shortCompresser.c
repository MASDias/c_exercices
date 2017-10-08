#include <stdio.h>

void compress_shorts(short* shorts, int n_shorts, int* integers){
	
	int i;
	int j = 0;
	
	for (i = 0; i < n_shorts; i++)
	{
		if (i % 2 == 0)
		{
			*(integers + j) = *(shorts + i); //Adiciona um short ao vetor de inteiros.
			*(integers + j) = *(integers + j) << 16; //Nessa mesma posição, desloca o numero lá contido, 16 bits para a esquerda.
			*(integers + j) += *(shorts + (i+1)); //Adiciona o short da posição seguinte do vetor de shorts à mesma posição do vetor de inteiros, colocando o numero nos 16 bits à direita do numero inserido anteriormente.
			j++;
		}
	}
}
