main: existencial.o main.o
	gcc -Wall -g existencial.o main.o -o main
	
existencial.o: existencial.s
	gcc -Wall -g -c existencial.s -o existencial.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f existencial.o main.o main
