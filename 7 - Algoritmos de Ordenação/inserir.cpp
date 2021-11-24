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
