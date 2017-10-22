main: sumIntValues.o main.o
	gcc -Wall -g sumIntValues.o main.o -o main
	
sumIntValues.o: sumIntValues.s
	gcc -Wall -g -c sumIntValues.s -o sumIntValues.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f sumIntValues.o main.o main
