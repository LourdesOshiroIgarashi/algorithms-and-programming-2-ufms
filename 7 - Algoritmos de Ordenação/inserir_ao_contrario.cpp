void inserirCelula(int n, celula *&l){
    celula *novo;
    novo = (celula *) calloc(1, sizeof(celula));
    novo -> valor = n;
    novo -> prox = l;
    l = novo;
    // (*novo).num
}
