#include <stdio.h>
#include "wordCounter.h"

int main(void){
	
	char str[200];
	printf("Enter a String\n");
	/*Tive de usar esta notação esquisita para que o ciclo não saísse
	quando encontrava um espaço. [AVERIGUAR PORQUÊ] 
	           |
	           |
	           v
	 */
	scanf("%[^\n]s", str);
	printf("This string has %d",count_words(str));
	printf(" words!\n");
	
	
	return 0;
}
