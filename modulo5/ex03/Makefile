main: save_data.o change_address.o main.o
	gcc -Wall -g save_data.o change_address.o main.o -o main

save_data.o: save_data.c
	gcc -Wall -g -c save_data.c -o save_data.o
	
change_address.o: change_address.s
	gcc -Wall -g -c change_address.s -o change_address.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f change_address.o save_data.o main.o main
