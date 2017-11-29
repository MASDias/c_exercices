main: create_str.o main.o
	gcc -Wall -g create_str.o main.o -o main
	
create_str.o: create_str.c
	gcc -Wall -g -c create_str.c -o create_str.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f create_str.o main.o main
