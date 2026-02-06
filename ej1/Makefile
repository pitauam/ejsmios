#Esto es un makefile para el cajero
BINARY = Cajero
CFLAGS = -Wall -pedantic -ansi -g
OBJS = main.o cashier.o
CC = gcc

all: $(BINARY)

Cajero: $(OBJS)
	$(CC) -o $(CFLAGS) $(OBJS)

main.o: cashier.c cashier.h
	$(CC) -c $(CFLAGS) main.c

cashier.o : cashier.h
	$(CC) -c $(CFLAGS) cashier.c

clean:
	rm -f *.o $(BINARY)