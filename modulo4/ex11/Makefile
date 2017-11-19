main: rotate.o main.o
	gcc -Wall -g rotate.o main.o -o main
	
rotate.o: rotate.c
	gcc -Wall -g -c rotate.c -o rotate.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f rotate.o main.o main
