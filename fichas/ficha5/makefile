CFLAGS=-Wall -Wextra -pedantic -std=c11

ficha2: ficha2.o
	  gcc $(CFLAGS) $^ -o ficha2 -lm
	  rm ficha2.o

ficha2.o: ficha2.c
	      gcc $(CFLAGS) -c $^
