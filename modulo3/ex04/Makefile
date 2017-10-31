main: vecSum.o vecAvg.o main.o
	gcc -Wall -g vecSum.o vecAvg.o main.o -o main
	
vecSum.o: vecSum.s
	gcc -Wall -g -c vecSum.s -o vecSum.o

vecAvg.o: vecAvg.s
	gcc -Wall -g -c vecAvg.s -o vecAvg.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f vecSum.o main.o main
