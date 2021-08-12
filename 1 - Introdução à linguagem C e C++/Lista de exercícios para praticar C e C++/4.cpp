/*Leia o valor de um depósito e o valor da taxa de juros, 
calcule e mostre o valor do
rendimento e o valor total depois do rendimento. */

#include <stdio.h>

int main()
{
    double deposito, taxadejuros, rendimento, valortotal;

    printf("Informe o valor do depósito:");
	scanf("%lf", &deposito);						
	printf("\nInforme o valor da taxa de juros:");
	scanf("%lf", &taxadejuros);						
	
    rendimento = taxadejuros * 0.01 * deposito;
    valortotal = deposito + rendimento;

    printf("\nO valor total depois do rendimento é de %f", valortotal);

    return 0;
}