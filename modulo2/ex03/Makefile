main: sum.o main.o
	gcc -Wall -g sum.o main.o -o main
	
sum.o: sum.s
	gcc -Wall -g -c sum.s -o sum.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f sum.o main.o main
