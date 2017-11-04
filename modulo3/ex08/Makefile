main: testEven.o sumVec.o main.o
	gcc -Wall -g testEven.o sumVec.o main.o -o main
	
testEven.o: testEven.s
	gcc -Wall -g -c testEven.s -o testEven.o

sumVec.o: sumVec.s
	gcc -Wall -g -c sumVec.s -o sumVec.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f testEven.o sumVec.o main.o main
