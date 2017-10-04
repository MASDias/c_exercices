main: whereExists.o main.o
	gcc -Wall -g whereExists.o main.o -o main
	
whereExists.o: whereExists.c
	gcc -Wall -g -c whereExists.c -o whereExists.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f whereExists.o main.o main
