main: find_greater.o save_grades.o main.o
	gcc -Wall -g find_greater.o save_data.o main.o -o main
	
find_greater.o: find_greater.s
	gcc -Wall -g -c find_greater.s -o find_greater.o

save_grades.o: save_grades.s
	gcc -Wall -g -c save_grades.s -o save_data.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f find_greater.o save_grades.o main.o main
