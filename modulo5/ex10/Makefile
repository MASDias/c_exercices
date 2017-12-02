main: search_matrix.o main.o
	gcc -Wall -g search_matrix.o main.o -o main
	
search_matrix.o: search_matrix.c
	gcc -Wall -g -c search_matrix.c -o search_matrix.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f search_matrix.o main.o main
