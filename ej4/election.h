#ifndef ELECTION_H
#define ELECTION_H

#include "types.h"

/* Ocultación de la estructura (Encapsulación) [cite: 61, 701] */
typedef struct _Election Election;

/* Primitivas solicitadas en el Ejercicio 4 [cite: 493-496] */
Election* election_create(int n_options);
void election_free(Election *e);
Status election_vote(Election *e, int option);
double election_get_percentage(Election *e, int option);
void election_print(Election *e);

#endif