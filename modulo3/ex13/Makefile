main: vecFill.o main.o
	gcc -Wall -g vecFill.o main.o -o main
	
vecFill.o: vecFill.s
	gcc -Wall -g -c vecFill.s -o vecFill.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f vecFill.o main.o main
