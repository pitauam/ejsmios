#include <stdio.h>
#include <stdlib.h>
#include "election.h"

int main()
{
    Election *election = NULL;
    int n;
    int ncandidates;/*number of candidates*/
    int i,j;

    printf("How many candidates are there?: ");
    scanf("%i", &ncandidates);

    if (ncandidates < 1) /*Checks there is at least one candidate*/
    {
        printf("Sorry, but there must be at least one candidate for the elections to take place.\n");
        return ERROR;
    }
    /* 1. Crear elecciones para 4 candidatos [cite: 501] */
    election = election_create(ncandidates);

    if (election == NULL)
    {
        printf("There was an ERROR while creating the elections.\n");
        return ERROR; /*error*/ 
    }

    /* 2. Votar. Usa bucles o llamadas sueltas [cite: 502, 507, 515] */
    /* Ejemplo: election_vote(election, 0); */

    n = 0;
    for (i = 0; i < ncandidates; i++)
    {
        printf("How many votes did the candidate number %i get?: ", i + 1);
        scanf("%i", &n);

        for (j = 0; j < n; j++) /*un poco cutre pero representa como se cuenta cada voto uno por uno*/
        {
            /*iba a comprobar que j no fuese negativo pero me parece excesivo*/

            if (election_vote(election, i) == ERROR)
            {
                printf("There was an ERROR while counting the votes.\n");
                return ERROR;
            }
        }
    }

    /* 3. Imprimir el resultado global [cite: 517] */

    /*for (int k = 0; k < N; k++)
    {
        perc = election_get_percentage(election, k);
        if (perc == -1)
        {
            printf("ERROR when calculating the election percentage.\n");
            return ERROR;
        }
NO hace falta esto. de ello se encarga election print.
    }*/

    election_print(election);

    /* 4. Liberar memoria al terminar [cite: 518] */

    election_free(election);

    return EXIT_SUCCESS;
}