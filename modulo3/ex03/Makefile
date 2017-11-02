main: strCopy2.o main.o
	gcc -Wall -g strCopy2.o main.o -o main
	
strCopy2.o: strCopy2.s
	gcc -Wall -g -c strCopy2.s -o strCopy2.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f strCopy2.o main.o main
