main: upperConverter.o main.o
	gcc -Wall -g upperConverter.o main.o -o main
	
upperConverter.o: upperConverter.c
	gcc -Wall -g -c upperConverter.c -o upperConverter.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f upperConverter.o main.o main
