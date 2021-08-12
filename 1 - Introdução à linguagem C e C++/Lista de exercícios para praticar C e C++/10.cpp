/*Leia valores correspondentes a um depósito e 
dois saques e, em seguida, calcule o
saldo final, sabendo que cada operação custa 0.38 
por cento do valor sacado. */

#include <stdio.h>
int main()
{
    double deposito, saque1, saque2, saldo_final;
    
    printf("Informe o valor do depósito: ");
    scanf("%lf", &deposito);
    printf("\nInforme o valor do primeiro saque: ");
    scanf("%lf", &saque1);
    printf("\nInforme o valor do segundo saque: ");
    scanf("%lf", &saque2);

    saldo_final = deposito - (saque1 + saque1 * 0.38 * 0.01) - (saque2 + saque2 * 0.38 * 0.01);

    printf("O saldo final é de %lf", saldo_final);

    return 0;

}