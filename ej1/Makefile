#Esto es un makefile para el cajero
BINARY = Cajero
CFLAGS = -Wall -pedantic -ansi -g
OBJS = main.o cashier.o
CC = gcc

all: $(BINARY)

Cajero: $(OBJS)
	$(CC) -o $(BINARY) $(CFLAGS) $(OBJS)

main.o: main.c cashier.h
	$(CC) -c $(CFLAGS) main.c

#importante en cashier.o añadir tmbn cashier.c
cashier.o : cashier.c cashier.h
	$(CC) -c $(CFLAGS) cashier.c

clean:
	rm -f *.o $(BINARY)