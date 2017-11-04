main: encrypt.o main.o
	gcc -Wall -g encrypt.o main.o -o main
	
encrypt.o: encrypt.s
	gcc -Wall -g -c encrypt.s -o encrypt.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f encrypt.o main.o main
