main: contatBytes.o  main.o
	gcc -Wall -g contatBytes.o main.o -o main
	
contatBytes.o: contatBytes.s
	gcc -Wall -g -c contatBytes.s -o contatBytes.o
	
main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f contatBytes.o main.o main
