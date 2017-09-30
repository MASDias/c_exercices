main: fillVec.o main.o
	gcc -Wall -g fillVec.o main.o -o main
	
fillVec.o: fillVec.c
	gcc -Wall -g -c fillVec.c -o fillVec.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f fillVec.o main.o main
