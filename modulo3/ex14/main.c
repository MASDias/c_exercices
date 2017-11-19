#include <stdio.h>
#include "existencial.h"
#include "vecDif.h"

int num = 8;
short int vec[]={1,2,1,3,4,4,7,4};
short int *ptr;
short int x = 7;

int main(void){
	int i;
	int ret = 0;
	ptr = vec;
	
	printf("\nVector:{");
	for (i = 0; i < num; i++)
	{
		printf("%d%s", vec[i], i <= num-2 ? ", " : "");
	}
	printf("}\n");
	
	ret = exists();
	
	printf("x = %d", x);
	if(ret == 1){
		printf("\no valor x existe em duplicado no vetor\n");
	}else if(ret == 0){
		printf("\no valor x não existe em duplicado no vetor\n");
	}
	
	ret = vec_diff();
	
	printf("\nNumero de elementos não repetidos no vetor: %d\n", ret);
	
	return 0;
	
}
