main: wordFinder.o main.o
	gcc -Wall -g wordFinder.o main.o -o main
	
wordFinder.o: wordFinder.c
	gcc -Wall -g -c wordFinder.c -o wordFinder.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f wordFinder.o main.o main
