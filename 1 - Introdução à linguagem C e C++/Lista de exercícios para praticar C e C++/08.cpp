/*Leia dois números inteiros e calcule o 
primeiro número elevado à potência do segundo.
Depois, calcule a raiz quadrada do resultado. */

#include <stdio.h>
#include <math.h>
int main()
{
    int num1, num2, elevado;
    double raizquadrada;

    printf("Digite 2 números inteiros separados por espaço: ");
    scanf("%d %d", &num1, &num2);

    elevado = pow(num1, num2);
    raizquadrada = sqrt(elevado);

    printf("A raiz do número %d elevado a %d é %lf", num1, num2, raizquadrada);

    return 0;

}
