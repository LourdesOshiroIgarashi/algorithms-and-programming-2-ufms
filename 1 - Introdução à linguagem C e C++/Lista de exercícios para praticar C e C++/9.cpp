/*Leia o ano de nascimento de uma pessoa e o ano atual, 
calcule e mostre: a) a idade dessa pessoa; 
b) quantos anos essa pessoa terá em 2034.*/

#include <stdio.h>

int main()
{
    int ano_de_nascimento, ano_atual, idade_futura, idade_atual;

    printf("Qual o seu ano de nascimento? ");
    scanf("\n%d", &ano_de_nascimento);

    printf("\nQual o ano atual? ");
    scanf("\n%d", &ano_atual);

    idade_atual = ano_atual - ano_de_nascimento;
    idade_futura = 2034 - ano_de_nascimento;

    printf("A sua idade é %d anos", idade_atual);
    printf("\nA sua idade em 2034 é %d anos", idade_futura);

    return 0;
}