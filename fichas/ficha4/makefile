CFLAGS=-Wall -Wextra -pedantic -std=c11

ficha4: ficha4.o
	  gcc $(CFLAGS) $^ -o ficha4 -lm
	  rm ficha4.o

ficha4.o: ficha4.c
	      gcc $(CFLAGS) -c $^
