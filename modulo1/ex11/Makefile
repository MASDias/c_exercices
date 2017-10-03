main: palindrome.o main.o
	gcc -Wall -g palindrome.o main.o -o main
	
palindrome.o: palindrome.c
	gcc -Wall -g -c palindrome.c -o palindrome.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f palindrome.o main.o main
