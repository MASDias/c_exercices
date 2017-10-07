#include <stdio.h>

void arraySort(int* vec, int n){
	int i,j;
	int temp;
	
	//Ciclo para percorrer valores de vec
	for (i = 0; i < n; ++i)
    {
		//Ciclo para percorrer valores de vec na posição a seguir ao ciclo anterior. 
        for (j = i + 1; j < n; ++j)
        {
			//Se o valor encontrado no primeiro ciclo for maior do que o valor encontrado na posição a seguir
            if (vec[i] > vec[j])
            {
				//Guarda numero maior na posição seguinte e arrasta o numero que se encontrava guardado nessa posição para trás.
                temp =  vec[i];
                vec[i] = vec[j];
                vec[j] = temp;
            }
        }
    }
}
