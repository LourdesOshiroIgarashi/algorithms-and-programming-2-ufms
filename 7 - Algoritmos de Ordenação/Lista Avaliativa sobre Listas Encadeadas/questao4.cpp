/*Considerando o tipo struct definido abaixo,

struct celula{

     int valor;

     struct celula *prox;

};

escreva uma função soma para retornar a soma dos elementos de uma lista L.

int soma(celula *L);

Entrada: Uma sequência de números inteiros. (Uma entrada negativa encerra a entrada).

1 5 8 7 23 98 42 31 14 33 -1

Saída: A saída representa a soma dos elementos da lista lista.

262
*/

#include <stdio.h>
#include <stdlib.h>

struct Lista{
    int num;
    struct Lista *p;
};

void inserirLista(int n, Lista *&l){
    Lista *novo;
    novo = (Lista *) calloc(1, sizeof(Lista));
    novo -> num = n;
    novo -> p = l;
    l = novo;
    // (*novo).num
}

int somar(Lista *&l)
{
    int soma = 0;

    while (l != NULL && l->num>=0)
    {
        soma += l->num;
        l = l->p;
    }
    return soma;
}

int main(){
    int x;
    Lista *p0 = NULL;
    
    while(x >= 0){
        scanf("%d", &x);
        if(x >= 0){
            inserirLista(x, p0);
        }
    }
    
    printf("%d", somar(p0));
    
    return 0;
}
