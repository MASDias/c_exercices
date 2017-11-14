main: countBitsVec.o main.o
	gcc -Wall -g countBitsVec.o main.o -o main
	
countBitsVec.o: countBitsVec.s
	gcc -Wall -g -c countBitsVec.s -o countBitsVec.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f countBitsVec.o main.o main
