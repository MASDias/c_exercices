main: arraySort.o sort.o main.o 
	gcc -Wall -g arraySort.o sort.o main.o -o main
	
arraySort.o: arraySort.s
	gcc -Wall -g -c arraySort.s -o arraySort.o

sort.o: sort.s
	gcc -Wall -g -c sort.s -o sort.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f arraySort.o sort.o main.o main
