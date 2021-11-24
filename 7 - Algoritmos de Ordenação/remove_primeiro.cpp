#include <stdio.h>
#include <stdlib.h>

struct celula{
     int valor;
     struct celula *prox;

};

void inserirCelula(int n, celula *&l){
    celula *novo;
    novo = (celula *) calloc(1, sizeof(celula));
    novo -> valor = n;
    novo -> prox = l;
    l = novo;
    // (*novo).num
}

int remove_primeiro(celula *&L)
{
    celula *p;
    celula *aux;
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
    aux->prox = NULL;
    p->prox = aux->prox;

    return p->valor;
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
        printf("%d\n", remove_ultimo(p0));
    }
    
    return 0;
}
