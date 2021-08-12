/*Leia um valor correspondente ao custo de um determinado 
espetáculo teatral e o preço
do convite individual desse espetáculo e, em seguida, 
calcule a mostre a quantidade mínima de convites que 
devem ser vendidos para custear o espetáculo.*/

#include <stdio.h>
#include <math.h>

int main()
{
    double custo_espetaculo, custo_convite;
    int quantidade_convite;

    printf("Informe o custo total do espetáculo: ");
    scanf("\n%lf", &custo_espetaculo);
    printf("\nInforme o valor do ingresso: ");
    scanf("\n%lf", &custo_convite);

    quantidade_convite = ceil(custo_espetaculo / custo_convite);

    printf("A quantidade mínima de ingressos que precisam ser vendidos é %d.", quantidade_convite);

    return 0;
}