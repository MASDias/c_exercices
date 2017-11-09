main: cube.o main.o
	gcc -Wall -g cube.o main.o -o main
	
cube.o: cube.s
	gcc -Wall -g -c cube.s -o cube.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f cube.o main.o main
