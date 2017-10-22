main: salaryRaiser.o main.o
	gcc -Wall -g salaryRaiser.o main.o -o main
	
salaryRaiser.o: salaryRaiser.s
	gcc -Wall -g -c salaryRaiser.s -o salaryRaiser.o	

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f salaryRaiser.o main.o main
