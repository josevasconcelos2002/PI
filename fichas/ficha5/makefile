CFLAGS=-Wall -Wextra -pedantic -std=c11

questoes1: questoes1.o
	  gcc $(CFLAGS) $^ -o questoes1 -lm
	  rm questoes1.o

questoes1.o: questoes1.c
	      gcc $(CFLAGS) -c $^
