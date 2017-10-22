main: sumNValues.o main.o
	gcc -Wall -g sumNValues.o main.o -o main
	
sumNValues.o: sumNValues.s
	gcc -Wall -g -c sumNValues.s -o sumNValues.o	

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f sumNValues.o main.o main
