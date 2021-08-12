/*Leia o salário de um funcionário e uma porcentagem, 
calcule e mostre o novo salário,
sabendo-se que este sofreu o aumento da porcentagem informada.*/

#include <stdio.h>

int main()
{
    double salario, porcentagem, novosalario;
    
    printf("Informe o salário do usuário: ");
    scanf("%lf", &salario);

    printf("\nInforme a porcentagem de aumento do salário: ");
    scanf("%lf", &porcentagem);

    novosalario = salario + (salario * porcentagem * 0.01);
    printf("\nO salário novo do usuário é %lf", novosalario);

    return 0;
}