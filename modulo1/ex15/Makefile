main: consecutiveSets.o main.o
	gcc -Wall -g consecutiveSets.o main.o -o main
	
consecutiveSets.o: consecutiveSets.c
	gcc -Wall -g -c consecutiveSets.c -o consecutiveSets.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f consecutiveSets.o main.o main
