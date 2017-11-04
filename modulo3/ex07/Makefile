main: decrypt.o encrypt.o main.o
	gcc -Wall -g decrypt.o encrypt.o main.o -o main
	
decrypt.o: decrypt.s
	gcc -Wall -g -c decrypt.s -o decrypt.o

encrypt.o: encrypt.s
	gcc -Wall -g -c encrypt.s -o encrypt.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f decrypt.o encrypt.o main.o main
