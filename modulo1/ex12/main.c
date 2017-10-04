#include <stdio.h>
#include "capitalizeWords.h"

int main(void){
	
	char sentence[] = "The number must be saved";
	char sentence2[] = "The maximum value of this CYCLE";
	
	capitalize_words(sentence);
	capitalize_words(sentence2);
	
	printf("Capitalized Sentence:\n%s\n", sentence);
	
	printf("Capitalized Sentence2:\n%s\n", sentence2);
	
	return 0;
}
