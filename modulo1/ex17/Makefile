main: swap.o main.o
	gcc -Wall -g swap.o main.o -o main
	
swap.o: swap.c
	gcc -Wall -g -c swap.c -o swap.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f swap.o main.o main
