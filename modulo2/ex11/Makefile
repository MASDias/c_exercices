main: isMultiple.o main.o
	gcc -Wall -g isMultiple.o main.o -o main
	
isMultiple.o: isMultiple.s
	gcc -Wall -g -c isMultiple.s -o isMultiple.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f isMultiple.o main.o main
