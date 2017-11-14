main: calculate.o main.o
	gcc -Wall -g calculate.o main.o -o main
	
calculate.o: calculate.s
	gcc -Wall -g -c calculate.s -o calculate.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f calculate.o main.o main
