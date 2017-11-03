main: zeroHero.o main.o
	gcc -Wall -g zeroHero.o main.o -o main
	
zeroHero.o: zeroHero.s
	gcc -Wall -g -c zeroHero.s -o zeroHero.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f zeroHero.o main.o main
