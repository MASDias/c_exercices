main: getArea.o main.o
	gcc -Wall -g getArea.o main.o -o main
	
getArea.o: getArea.s
	gcc -Wall -g -c getArea.s -o getArea.o	

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f getArea.o main.o main
