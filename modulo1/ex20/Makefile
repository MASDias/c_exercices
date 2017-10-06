main: wordFinder.o findWords.o main.o
	gcc -Wall -g wordFinder.o findWords.o main.o -o main
	
wordFinder.o: wordFinder.c
	gcc -Wall -g -c wordFinder.c -o wordFinder.o
	
findWords.o: findWords.c
	gcc -Wall -g -c findWords.c -o findWords.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f findWords.o main.o main
