main: sumEvens.o main.o
	gcc -Wall -g sumEvens.o main.o -o main
	
sumEvens.o: sumEvens.c
	gcc -Wall -g -c sumEvens.c -o sumEvens.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f sumEvens.o main.o main
