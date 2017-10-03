main: sumEvenValues.o main.o
	gcc -Wall -g sumEvenValues.o main.o -o main
	
sumEvenValues.o: sumEvenValues.c
	gcc -Wall -g -c sumEvenValues.c -o sumEvenValues.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f sumEvenValues.o main.o main
