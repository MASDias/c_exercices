main: create_matrix.o main.o
	gcc -Wall -g create_matrix.o main.o -o main
	
create_matrix.o: create_matrix.c
	gcc -Wall -g -c create_matrix.c -o create_matrix.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f create_matrix.o main.o main
