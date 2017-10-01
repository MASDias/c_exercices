main: powerRef.o main.o
	gcc -Wall -g powerRef.o main.o -o main
	
powerRef.o: powerRef.c
	gcc -Wall -g -c powerRef.c -o powerRef.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f powerRef.o main.o main
