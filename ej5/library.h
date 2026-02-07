#ifndef LIBRARY_H
#define LIBRARY_H
#include "book.h" /* Necesario para usar el tipo Book */

typedef struct _Library Library;

Library* library_create();
void library_destroy(Library *l);
Status library_add_book(Library *l, const char *desc);
Status library_remove_book(Library *l, const char *isbn);
void library_print(const Library *l);

#endif