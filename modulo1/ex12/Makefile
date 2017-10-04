main: capitalizeWords.o main.o
	gcc -Wall -g capitalizeWords.o main.o -o main
	
capitalizeWords.o: capitalizeWords.c
	gcc -Wall -g -c capitalizeWords.c -o capitalizeWords.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f capitalizeWords.o main.o main
