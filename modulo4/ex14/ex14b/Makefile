main: jointBits.o main.o
	gcc -Wall -g jointBits.o main.o -o main
	
jointBits.o: jointBits.s
	gcc -Wall -g -c jointBits.s -o jointBits.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f jointBits.o main.o main
