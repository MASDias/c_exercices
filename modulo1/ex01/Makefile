main: printPointer.o main.o
	gcc printPointer.o main.o -o main
	
printPointer.o: printPointer.c
	gcc -c printPointer.c -o printPointer.o

main.o: main.c
	gcc -c main.c -o main.o

run: main
	./main

clean:
	rm -f printPointer.o main.o main
