main: iterator.o main.o
	gcc -Wall -g iterator.o main.o -o main
	
iterator.o: iterator.c
	gcc -Wall -g -c iterator.c -o iterator.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f iterator.o main.o main
