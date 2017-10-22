main: calculator.o main.o
	gcc -Wall -g calculator.o main.o -o main
	
calculator.o: calculator.s
	gcc -Wall -g -c calculator.s -o calculator.o	

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f calculator.o main.o main
