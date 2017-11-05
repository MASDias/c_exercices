main: sortWithoutReps.o arraySort.o sort.o copy.o existencial.o main.o
	gcc -Wall -g sortWithoutReps.o arraySort.o sort.o copy.o existencial.o main.o -o main
	
sortWithoutReps.o: sortWithoutReps.s
	gcc -Wall -g -c sortWithoutReps.s -o sortWithoutReps.o
	
arraySort.o: arraySort.s
	gcc -Wall -g -c arraySort.s -o arraySort.o
	
sort.o: sort.s
	gcc -Wall -g -c sort.s -o sort.o
	
existencial.o: existencial.s
	gcc -Wall -g -c existencial.s -o existencial.o
	
copy.o: copy.s
	gcc -Wall -g -c copy.s -o copy.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f sortWithoutReps.o arraySort.o sort.o copy.o existencial.o main.o main
