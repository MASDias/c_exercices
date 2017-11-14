main: subGreater.o main.o
	gcc -Wall -g subGreater.o main.o -o main
	
subGreater.o: subGreater.s
	gcc -Wall -g -c subGreater.s -o subGreater.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f subGreater.o main.o main
