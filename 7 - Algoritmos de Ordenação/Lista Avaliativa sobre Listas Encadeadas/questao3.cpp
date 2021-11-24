/* Escreva uma função que conte o número de células de uma lista linear encadeada.

Entrada: A entrada é composta dos valores a inserir na lista na ordem em que aparecem, sendo que o número 0 finaliza a entrada.
1 5 8 7 23 98 42 31 14 33 0

Saída: A saída representa o número de células da lista.
10

Crie um programa para testar sua função respeitando o formato da entrada e da saída.
*/

#include <stdio.h>
#include <stdlib.h>

struct Lista{
    int num;
    Lista *p;
};

void inserirLista(int n, Lista *&l){
    Lista *novo;
    novo = (Lista *) calloc(1, sizeof(Lista));
    novo -> num = n;
    novo -> p = l;
    l = novo;
    // (*novo).num
}

int contador(Lista *&l)
{
    Lista *x;
    x = l;
    int cont = 0;

    while (x != NULL)
    {
        cont++;
        x = x -> p;
    }
    return cont;
}

int main(){
    int x;
    Lista *p0 = NULL;
    
    while(x != 0){
        scanf("%d", &x);
        inserirLista(x, p0);
    }
    
    printf("%d", contador(p0) - 1);
    
    return 0;
}
