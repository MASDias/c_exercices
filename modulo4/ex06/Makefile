main: testEqual.o main.o
	gcc -Wall -g testEqual.o main.o -o main
	
testEqual.o: testEqual.s
	gcc -Wall -g -c testEqual.s -o testEqual.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f testEqual.o main.o main
