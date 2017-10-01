main: arraySortPointer.o main.o
	gcc -Wall -g arraySortPointer.o main.o -o main
	
arraySortPointer.o: arraySortPointer.c
	gcc -Wall -g -c arraySortPointer.c -o arraySortPointer.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f arraySortPointer.o main.o main
