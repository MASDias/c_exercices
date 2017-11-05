main: frequencies.o main.o 
	gcc -Wall -g frequencies.o main.o -o main
	
frequencies.o: frequencies.s
	gcc -Wall -g -c frequencies.s -o frequencies.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f frequencies.o main.o main
