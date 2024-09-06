#include <stdio.h>

/*
    Ler um número inteiro não negativo N e imprima todos os números naturais de
    0 até N em ordem decrescente.
*/

int main()
{
    int n, i;

    printf("Digite: ");
    scanf("%d", &n);
    
    for(i = n; i >= 0; i--) printf("%d ", i);
    return 0;
}