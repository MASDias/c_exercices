main: sumIntValuesCarry.o main.o
	gcc -Wall -g sumIntValuesCarry.o main.o -o main
	
sumIntValuesCarry.o: sumIntValuesCarry.s
	gcc -Wall -g -c sumIntValuesCarry.s -o sumIntValuesCarry.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f sumIntValuesCarry.o main.o main
