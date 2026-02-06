OBJECT = main.o election.o
CFLAGS = -Wall -ansi -pedantic

all: programa

programa: $(OBJECT)
	gcc -o programa $(CFLAGS) main.o election.o

main.o: main.c election.h
	gcc -c $(CFLAGS) main.c

election.o: election.c election.h types.h
	gcc -c $(CFLAGS) election.c

clean:
	rm -f *.o programa