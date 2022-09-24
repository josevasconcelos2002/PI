CFLAGS=-Wall -Wextra -pedantic -std=c11

ficha3: ficha3.o
	  gcc $(CFLAGS) $^ -o ficha3 -lm
	  rm ficha3.o

ficha3.o: ficha3.c
	      gcc $(CFLAGS) -c $^
