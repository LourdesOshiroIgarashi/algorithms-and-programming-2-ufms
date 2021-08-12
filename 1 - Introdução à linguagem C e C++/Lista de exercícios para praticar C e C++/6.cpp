/*Leia a dimensão do raio de um círculo 
e calcule e mostre a área do mesmo. 
Lembre-se que área = (pi ∗ raio2).*/

#include <stdio.h>

int main()
{
    double raio, pi, area;

    pi = 3.14;

    printf("Informe o raio do círculo:");
    scanf("%lf", &raio);

    area = pi * raio * raio;

    printf("\nA área do círculo é:");
    printf("%.2f", area);

    return 0;
}