main: sum_matrix.o main.o
	gcc -Wall -g sum_matrix.o main.o -o main
	
sum_matrix.o: sum_matrix.c
	gcc -Wall -g -c sum_matrix.c -o sum_matrix.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f sum_matrix.o main.o main
