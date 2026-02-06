#include "cashier.h"
#include <stdio.h>
#define INITIAL 0 /*dinero por defecto*/

int main(void)
{

    Cashier *cajero = NULL;
    double ingreso = INITIAL;
    double withdraw = INITIAL;
    int choice = 0; /*lo pongo a -1 por defecto*/

    cajero = cashier_create(INITIAL);

    while (choice != -1)
    {

        do
        {
            printf("Your balance is: %.2f€.\nType 1 to deposit money, 2 to withdraw money or -1 to exit the cashier: ", cashier_get_balance(cajero));
            scanf("%i", &choice);
            printf("\n");
        } while (choice != 1 && choice != 2 && choice != -1);

        if (choice == 1)
        {
            printf("You have chosen to deposit money. Enter amount to deposit: ");
            scanf("%lf", &ingreso);

            if ((cashier_deposit(cajero, ingreso)) == ERROR)
            {
                printf("There was an error while depositing money!\n\n"); /*estoy pensando en si tengo que verificar aqui en el main que el dinero ingresado sea positivo para diferenciar entre error depositando y error porque has intentado meter dinero positivo*/
            }
        }
        else if (choice == 2)
        {
            printf("You have chosen to withdraw money. Enter amount to withdraw: ");
            scanf("%lf", &withdraw);

            if ((cashier_withdraw(cajero, withdraw)) == ERROR)
            {
                printf("There was an error while withdrawing money!\n\n");
            }
        }
        else if (choice == -1)
        {
            printf("Final balance: %.2f€.\nExiting cashier...\n\n", cashier_get_balance(cajero));
        }
    }

    cashier_free(cajero);
    return 0; /*todo ok*/
}