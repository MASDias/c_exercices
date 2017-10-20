main: sumTwoInts.o main.o
	gcc -Wall -g sumTwoInts.o main.o -o main
	
sumTwoInts.o: sumTwoInts.s
	gcc -Wall -g -c sumTwoInts.s -o sumTwoInts.o	

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f contatBytes.o main.o main
