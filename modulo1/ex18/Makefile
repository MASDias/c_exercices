main: shortCompresser.o main.o
	gcc -Wall -g shortCompresser.o main.o -o main
	
shortCompresser.o: shortCompresser.c
	gcc -Wall -g -c shortCompresser.c -o shortCompresser.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f shortCompresser.o main.o main
