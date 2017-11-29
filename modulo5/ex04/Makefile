main: save_grades.o main.o
	gcc -Wall -g save_grades.o main.o -o main
	
save_grades.o: save_grades.s
	gcc -Wall -g -c save_grades.s -o save_grades.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f save_grades.o main.o main
