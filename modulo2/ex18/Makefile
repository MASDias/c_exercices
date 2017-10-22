main: functions.o main.o
	gcc -Wall -g functions.o main.o -o main
	
functions.o: functions.s
	gcc -Wall -g -c functions.s -o functions.o	

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f functions.o main.o main
