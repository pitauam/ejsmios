#include "cashier.h"
#include <stdio.h>
#define INITIAL 0 /*dinero por defecto*/

int main(void)
{

    Cashier *cajero = NULL;
    double balance = INITIAL; /*por defecto tiene 0*/
    double ingreso = INITIAL;
    double withdraw = INITIAL;
    int choice = -1; /*lo pongo a -1 por defecto*/

    cajero = cashier_create(INITIAL);

    do
    {
        printf("Your balance is: %.2lf€.\nType 1 to deposit money or 2 to withdraw money: ", cashier_get_balance(cajero));
        scanf("%i", &choice);
    } while (choice != 1 || choice != 2);

    if (choice == 1)
    {
        printf("You have chosen to deposit money. Enter amount to deposit: ");
        scanf("%lf", &ingreso);
        cashier_deposit(cajero, ingreso);
    }
    else if (choice == 2)
    {
        printf("You have chosen to withdraw money. Enter amount to withdraw: ");
        scanf("%lf", &withdraw);

        cashier_withdraw(cajero, withdraw);
    }

    printf("Your current balance is: %.2lf€.\n", cashier_get_balance(cajero));

    cashier_free(cajero);
    return 0; /*todo ok*/
}