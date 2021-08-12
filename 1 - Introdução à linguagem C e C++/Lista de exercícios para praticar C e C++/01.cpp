/*Leia o número de matrícula do funcionário, o número de horas 
trabalhadas mensais, o valor que ele recebe por hora e o número de filhos. 
Calcular e escrever o salário deste
funcionário, sendo que cada filho acrescenta 10% 
no salário do funcionário.*/

#include <stdio.h>

int main()
{
    int matricula, horasmensais, xfilhos;
    double ganhoporhora, salario, salariototal;

    printf("Informe qual o número de matrícula do usuário:");
    scanf("%d", &matricula);

    printf("\nInforme o número de horas trabalhadas mensais:");
    scanf("%d", &horasmensais);

    printf("\nInforme o número de filhos do funcionário:");
    scanf("%d", &xfilhos);

    printf("\nInforme quanto o funcionário ganha por hora:");
    scanf("%lf", &ganhoporhora);

    salario = horasmensais * ganhoporhora;
    salariototal = salario + (salario * xfilhos * 0.1);

    printf("\n\aO salário do funcionário %d é de %.3f reais.", matricula, salariototal);
    
    return 0;
}
