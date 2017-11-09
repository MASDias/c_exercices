main: greater.o main.o
	gcc -Wall -g greater.o main.o -o main

greater.o: greater.s
	gcc -Wall -g -c greater.s -o greater.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f greater.o main.o main
