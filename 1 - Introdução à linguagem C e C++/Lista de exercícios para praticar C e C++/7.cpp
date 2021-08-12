/*Leia um valor correspondente a uma medida em pés, 
e mostre as conversões para:
polegadas, jardas e milhas, sabendo que: 
1 pé = 12 polegadas; 1 jarda = 3 pés; 1 milha = 1.760 jardas. */

#include <stdio.h>

int main()
{
    double pes, polegadas, jardas, milhas;

    printf("Informe um valor em pés: ");
    scanf("%lf", &pes);

    polegadas = pes * 12;
    jardas = pes / 3;
    milhas = 1760 * jardas;

    printf("O valor em pés de %lf é equivalente a: %lf polegadas, %lf jardas e %lf milhas.", pes, polegadas, jardas, milhas);

    return 0;

}