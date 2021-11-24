#include<stdio.h>
#define MAX 50

// iterativa
int removeI(int n, int V[MAX], int k)
{
	for( ; k < n-1; k++)
		V[k] = V[k+1];


//	for(i = k; i < n-1; i++)
//		V[i] = V[i+1];

	return n-1;
}

// recursiva
int removeR(int n, int V[MAX], int k)
{
	// caso base
	if(k == n-1)
		return n-1;
	else{
		V[k] = V[k+1];
		return removeR(n, V, k+1);
	}
}


// versao sem return
void removeR2(int &n, int V[MAX], int k)
{
	// caso base
	if(k == n-1)
		n--;
	else{
		V[k] = V[k+1];
		removeR2(n, V, k+1);
	}
}



int main()
{
	int vetor[MAX];
	int n, i, k;


	scanf("%d", &n);
	for(i = 0; i < n; i++)
		scanf("%d", &vetor[i]);

	// posicao a remover
	scanf("%d", &k);

	removeR(n, vetor, k);

	for(i = 0; i < n; i++)
		printf("%d ", vetor[i]);
}
