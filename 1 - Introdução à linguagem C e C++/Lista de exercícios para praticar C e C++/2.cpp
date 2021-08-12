//Leia três notas e seus respectivos pesos, calcule e mostre a média aritmética entre elas.

#include <stdio.h>

int main()
{
    double nota1, nota2, nota3, somanota, mediafinal;
    int peso1, peso2, peso3, somapeso;
    
    printf("Leitura da Nota 1:");
	scanf("%lf", &nota1);						
	printf("\nLeitura da Nota 2:");
	scanf("%lf", &nota2);						
	printf("\nLeitura da Nota 3:");
	scanf("%lf", &nota3);	
    printf("\nLeitura do Peso 1:");
	scanf("%d", &nota1);						
	printf("\nLeitura do Peso 2:");
	scanf("%d", &nota2);						
	printf("\nLeitura do Peso 3:");
	scanf("%d", &nota3);				

    somanota = (nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3);
    somapeso = peso1 + peso2 + peso3;
    mediafinal = somanota / somapeso;

    printf("A média final é:");
    printf("\n%f", mediafinal);

    return 0;
}