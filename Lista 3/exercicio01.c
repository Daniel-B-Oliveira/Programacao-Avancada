#include <stdio.h>

/*
    Ler um número inteiro não negativo N e imprima todos os números naturais de
    0 até N em ordem crescente.
*/

int main()
{
    int n, i;

    scanf("%d", &n);

    for(i=0; i <= n; i++) printf("%d ", i);
    return 0;
}