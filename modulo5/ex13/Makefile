main: push.o pop.o main.o
	gcc -Wall -g push.o pop.o main.o -o main
	
push.o: push.c
	gcc -Wall -g -c push.c -o push.o
	
pop.o: pop.c
	gcc -Wall -g -c pop.c -o pop.o
	
main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f push.o pop.o main.o main
