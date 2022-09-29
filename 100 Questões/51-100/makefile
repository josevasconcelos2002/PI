CFLAGS=-Wall -Wextra -pedantic -std=c11

ficha5: ficha5.o
	  gcc $(CFLAGS) $^ -o ficha5 -lm
	  rm ficha5.o

ficha5.o: ficha5.c
	      gcc $(CFLAGS) -c $^
