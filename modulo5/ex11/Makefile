main: count_even_matrix.o main.o
	gcc -Wall -g count_even_matrix.o main.o -o main

count_even_matrix.o: count_even_matrix.s
	gcc -Wall -g -c count_even_matrix.s -o count_even_matrix.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f count_even_matrix.o main.o main
