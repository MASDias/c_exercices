main: strCat.o main.o
	gcc -Wall -g strCat.o main.o -o main
	
strCat.o: strCat.s
	gcc -Wall -g -c strCat.s -o strCat.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f strCat.o main.o main
