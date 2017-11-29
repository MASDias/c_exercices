main: save_data.o main.o
	gcc -Wall -g save_data.o main.o -o main
	
save_data.o: save_data.s
	gcc -Wall -g -c save_data.s -o save_data.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f save_data.o main.o main
