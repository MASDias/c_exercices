main: strCopy.o main.o
	gcc -Wall -g strCopy.o main.o -o main
	
strCopy.o: strCopy.s
	gcc -Wall -g -c strCopy.s -o strCopy.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f strCopy.o main.o main
