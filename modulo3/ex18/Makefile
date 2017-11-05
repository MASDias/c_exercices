main: countSeq.o seq1.o seq2.o main.o 
	gcc -Wall -g countSeq.o seq1.o seq2.o main.o -o main
	
countSeq.o: countSeq.s
	gcc -Wall -g -c countSeq.s -o countSeq.o

seq1.o: seq1.s
	gcc -Wall -g -c seq1.s -o seq1.o
	
seq2.o: seq2.s
	gcc -Wall -g -c seq2.s -o seq2.o

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

run: main
	./main

clean:
	rm -f countSeq.o seq1.o seq2.o main.o main
