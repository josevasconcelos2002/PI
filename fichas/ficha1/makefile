CFLAGS=-Wall -Wextra -pedantic -std=c11

ficha1: ficha1.o
	  gcc $(CFLAGS) $^ -o ficha1 -lm
	  rm ficha1.o

ficha1.o: ficha1.c
	      gcc $(CFLAGS) -c $^
