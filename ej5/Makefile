CFLAGS = -Wall -ansi -pedantic
OBJECT = book.o library.o main.o

all: biblioteca

biblioteca: $(OBJECT)
	gcc -o biblioteca $(CFLAGS) $(OBJECT)

main.o: main.c library.h book.h
	gcc -c $(CFLAGS) main.c

book.o: book.c book.h types.h
	gcc -c $(CFLAGS) book.c

library.o : library.c library.h book.h types.h
	gcc -c $(CFLAGS) library.c

clean:
	rm -f *.o biblioteca