main: existencial.o vecDif.o main.o
	gcc -Wall -g existencial.o vecDif.o main.o -o main
	
existencial.o: existencial.s
	gcc -Wall -g -c existencial.s -o existencial.o
	
vecDif.o: vecDif.s
	gcc -Wall -g -c vecDif.s -o vecDif.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f existencial.o vecDif.o main.o main
