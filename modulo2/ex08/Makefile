main: sumDiferentBits.o main.o
	gcc -Wall -g sumDiferentBits.o main.o -o main
	
sumDiferentBits.o: sumDiferentBits.s
	gcc -Wall -g -c sumDiferentBits.s -o sumDiferentBits.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f sumDiferentBits.o main.o main
