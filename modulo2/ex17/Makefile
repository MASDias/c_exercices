main: hotCold.o main.o
	gcc -Wall -g hotCold.o main.o -o main
	
hotCold.o: hotCold.s
	gcc -Wall -g -c hotCold.s -o hotCold.o	

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f hotCold.o main.o main
