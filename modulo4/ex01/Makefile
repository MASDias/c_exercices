main: square.o main.o
	gcc -Wall -g square.o main.o -o main
	
square.o: square.s
	gcc -Wall -g -c square.s -o square.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f square.o main.o main
