main: evenElements.o main.o
	gcc -Wall -g evenElements.o main.o -o main
	
evenElements.o: evenElements.c
	gcc -Wall -g -c evenElements.c -o evenElements.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f evenElements.o main.o main
