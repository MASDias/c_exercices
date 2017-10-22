main: functions2.o functions.o main.o
	gcc -Wall -g functions2.o functions.o main.o -o main
	
functions2.o: functions2.c
	gcc -Wall -g -c functions2.c -o functions2.o
	
functions.o: functions.s
	gcc -Wall -g -c functions.s -o functions.o	

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f functions2.o functions.o main.o main
