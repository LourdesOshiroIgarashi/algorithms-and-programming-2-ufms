/*Leia um valor correspondente ao salário mínimo seguido 
de um valor correspondente
ao salário de determinado funcionário e 
calcule e mostre a quantidade de salários
mínimos que ganha esse funcionário.*/

#include <stdio.h>

int main()
{
    double salario_minimo, salario_funcionario, quantidade_de_salarios;

    printf("Informe o salário mínimo atual: ");
    scanf("%lf", &salario_minimo);

    printf("\nInforme o salário do funcionário: ");
    scanf("%lf", &salario_funcionario);

    quantidade_de_salarios = salario_funcionario / salario_minimo;

    printf("\nO funcionário informado recebe %lf salários mínimos.", quantidade_de_salarios);

    return 0;
}