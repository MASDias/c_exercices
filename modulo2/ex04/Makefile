main: operation.o main.o
	gcc -Wall -g operation.o main.o -o main
	
operation.o: operation.s
	gcc -Wall -g -c operation.s -o operation.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f operation.o main.o main
