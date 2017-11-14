main: countBits.o main.o
	gcc -Wall -g countBits.o main.o -o main
	
countBits.o: countBits.c
	gcc -Wall -g -c countBits.c -o countBits.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f countBits.o main.o main
