main: sumN.o main.o
	gcc -Wall -g sumN.o main.o -o main
	
sumN.o: sumN.s
	gcc -Wall -g -c sumN.s -o sumN.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f sumN.o main.o main
