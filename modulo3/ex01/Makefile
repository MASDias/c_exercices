main: spaceCount.o main.o
	gcc -Wall -g spaceCount.o main.o -o main
	
spaceCount.o: spaceCount.s
	gcc -Wall -g -c spaceCount.s -o spaceCount.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f spaceCount.o main.o main
