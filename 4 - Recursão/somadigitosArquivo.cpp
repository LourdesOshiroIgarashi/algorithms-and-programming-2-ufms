#include<stdio.h>


// n positivos
int somadigitos(int n) // n =189
{
	int soma;

	if(n < 10)
		soma =  n;
	else
		soma = (n%10) + somadigitos(n/10); 
		
	
	return soma;

}


int somadigitos2(int n) // n =189
{
	if(n < 10)
		return n;
	else
		return (n%10) + somadigitos(n/10); 
}


int main()
{
	int n;

	scanf("%d", &n);

	printf("Soma dos digitos: %d\n", somadigitos2(n));

	return 0;
}
