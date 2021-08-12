/*
Leia os valores correspondentes à base e altura de um triângulo 
e calcule e mostre a área do mesmo. 
Lembre-se que área = (base ∗ altura)/2. 
*/

#include <stdio.h>

int main()
{
    double base, altura, area;

    printf("Informe o valor da base do triângulo: ");
    scanf("%lf", &base);
    printf("\nInforme o valor da altura do triângulo: ");
    scanf("%lf", &altura);

    area = base * altura / 2;

    printf("\nA área do triângulo é de %lf", area);

    return 0;
}
