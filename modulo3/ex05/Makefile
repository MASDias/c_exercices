main: vec_int.o main.o
	gcc -Wall -g vec_int.o main.o -o main
	
vec_int.o: vec_int.s
	gcc -Wall -g -c vec_int.s -o vec_int.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f vec_int.o main.o main
