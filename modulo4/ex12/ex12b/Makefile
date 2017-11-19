main: activateBit.o main.o
	gcc -Wall -g activateBit.o main.o -o main
	
activateBit.o: activateBit.s
	gcc -Wall -g -c activateBit.s -o activateBit.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f activateBit.o main.o main
