#esto es un makefile

all: programa

programa: main.o rational.o
	gcc -o programa -Wall -ansi -pedantic main.o rational.o

main.o: main.c rational.h
	gcc -c -Wall -ansi -pedantic main.c

rational.o: rational.c rational.h types.h
	gcc -c -Wall -ansi -pedantic rational.c


clean:
	rm -f *.o programa

