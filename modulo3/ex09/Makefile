main: searcher.o main.o
	gcc -Wall -g searcher.o main.o -o main
	
searcher.o: searcher.s
	gcc -Wall -g -c searcher.s -o searcher.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f searcher.o main.o main
