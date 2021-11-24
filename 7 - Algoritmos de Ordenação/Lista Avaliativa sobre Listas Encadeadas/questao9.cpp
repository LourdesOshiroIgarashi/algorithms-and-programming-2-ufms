/* Considerando o tipo struct definido abaixo,

struct celula{

     int valor;

     struct celula *prox;

};

escreva uma função remove_ultimo para remover o último nó de uma lista L. Além disso, a função deve retornar o valor armazenado no nó removido.

int remove_ultimo(celula *&L);

O seu programa deve ler uma sequência de n números inteiros positivos (maiores que zero) e armazená-los em uma lista simplesmente encadeada. Em seguida, o seu programa deverá ler um valor k e realizar k vezes a remoção do último elemento da lista, imprimindo o valor removido. Caso não haja último elemento a remover, imprima o número zero.

Entrada: n, uma sequência de n números positivos, k

5
8 7 23 98 42
3

Saída: Os últimos k elementos removidos (cada um em uma nova linha).

42

98

23
*/

#include <stdio.h>
#include <stdlib.h>

struct celula{
     int valor;
     struct celula *prox;
};

void inserirCelula(int n, celula * &lst){
    celula *novo, *p;

    novo = (celula*) malloc(sizeof(celula));
    novo->valor = n;
    novo->prox = NULL;

    if(lst == NULL){
        lst = novo;
        }else{
        p = lst;
        while(p->prox != NULL){
            p = p->prox;
        }
        p->prox = novo;
    }
}

int remove_ultimo(celula *&L)
{
    celula *p;
    celula *aux;
    int valor;
    p = L;

    if (p->prox == NULL)
    {
        return p->valor;
    }

    while (p->prox != NULL)
    {
        aux = p;
        p = p->prox;
    }
    valor = p->valor;
    aux->prox = NULL;
    p->prox = aux->prox;
    
    return valor;
}


int main(){
    int x, k, entrada;
    celula *p0 = NULL;
    
    scanf("%d", &x);
    
    for(int i = 0; i < x; i++){
        scanf("%d", &entrada);
        if(entrada >= 0){
            inserirCelula(entrada, p0);
        }
    }
    
    scanf("%d", &k);
    
    for(int i = 0; i < k; i++){
        if(i < x){
            printf("%d\n", remove_ultimo(p0));
        }
        else{
            printf("%d", 0);
        }
    }
    
    return 0;
}
