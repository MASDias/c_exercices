main: greater10.o main.o
	gcc -Wall -g greater10.o main.o -o main
	
greater10.o: greater10.s
	gcc -Wall -g -c greater10.s -o greater10.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f greater10.o main.o main
