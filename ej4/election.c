#include <stdio.h>
#include <stdlib.h>
#include "election.h"

struct _Election {
    int n_options;    /* Número de candidatos */
    int *votes;       /* Array dinámico para contar los votos [cite: 1037] */
    int total_votes;  /* Suma total para calcular porcentajes */
};

Election* election_create(int n_options) {
    Election *e = NULL;
    int i;
    if (n_options <= 0) return NULL;

    /* 1. Reserva para la "caja" (la estructura)  */
    e = (Election*) malloc(sizeof(Election));
    if (e == NULL) return NULL;

    /* 2. Reserva para el "contenido" (el array de votos) [cite: 1232] */
    e->votes = (int*) malloc(n_options * sizeof(int));
    if (e->votes == NULL) {
        free(e); /* Limpieza si falla la segunda reserva [cite: 1072] */
        return NULL;
    }

    /* 3. Inicialización */
    e->n_options = n_options;
    e->total_votes = 0;
    for (i = 0; i < n_options; i++) e->votes[i] = 0;

    return e;
}

void election_free(Election *e) {
    if (e != NULL) {
        /* TU TURNO: Libera primero el array de votos y luego la estructura [cite: 1294] */
    }
}

Status election_vote(Election *e, int option) {
    /* TU TURNO: 
       1. Comprobar que 'e' no es NULL[cite: 857].
       2. Comprobar que 'option' es válida (entre 0 y n_options-1).
       3. Si es válida: sumar 1 a la opción y 1 al total. Devolver OK.
       4. Si no: devolver ERROR. [cite: 494, 972]
    */
}

double election_get_percentage(Election *e, int option) {
    /* TU TURNO: 
       1. Calcular (votos_opcion / total_votos) * 100.
       2. ¡Cuidado! Usa (double) para no perder decimales.
       3. Si el total es 0, devuelve 0.0. [cite: 495]
    */
}

void election_print(Election *e) {
    /* TU TURNO:
       Haz un bucle que imprima cada candidato y su resultado[cite: 496, 517].
       Ejemplo: "Candidato 0: 2 votos (28.57%)"
    */
}