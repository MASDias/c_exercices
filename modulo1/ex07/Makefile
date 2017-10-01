main: arraySort.o main.o
	gcc -Wall -g arraySort.o main.o -o main
	
arraySort.o: arraySort.c
	gcc -Wall -g -c arraySort.c -o arraySort.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f arraySort.o main.o main
