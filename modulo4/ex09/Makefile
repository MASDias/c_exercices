main: calc.o main.o
	gcc -Wall -g calc.o main.o -o main
	
calc.o: calc.s
	gcc -Wall -g -c calc.s -o calc.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f calc.o main.o main
