CFLAGS=-Wall -Wextra -pedantic -std=c11

exercicio: exercicio.o
	  gcc $(CFLAGS) $^ -o exercicio -lm
	  rm exercicio.o

exercicio.o: exercicio.c
	      gcc $(CFLAGS) -c $^
