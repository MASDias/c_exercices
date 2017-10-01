main: arraySortNoReps.o main.o
	gcc -Wall -g arraySortNoReps.o main.o -o main
	
arraySortNoReps.o: arraySortNoReps.c
	gcc -Wall -g -c arraySortNoReps.c -o arraySortNoReps.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f arraySortNoReps.o main.o main
