main: contatBytes.o swap.o crossSum.o main.o
	gcc -Wall -g contatBytes.o swap.o crossSum.o main.o -o main
	
contatBytes.o: contatBytes.s
	gcc -Wall -g -c contatBytes.s -o contatBytes.o
	
swap.o: swap.s
	gcc -Wall -g -c swap.s -o swap.o
	
crossSum.o: crossSum.s
	gcc -Wall -g -c crossSum.s -o crossSum.o	

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f contatBytes.o main.o main
