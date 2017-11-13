main: countOdd.o main.o
	gcc -Wall -g countOdd.o main.o -o main
	
countOdd.o: countOdd.s
	gcc -Wall -g -c countOdd.s -o countOdd.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f countOdd.o main.o main
