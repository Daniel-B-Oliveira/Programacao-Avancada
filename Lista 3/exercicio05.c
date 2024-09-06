#include <stdio.h>

/*
    Ler um valor não negativo para N e escreva o valor de y, onde:
    y = 2^(2n).
    Resolva sem usar pow.
*/

int main()
{
    int n, i, y=1;

    scanf("%d", &n);
    if (n < 0) n = -n;

    for(i=0; i < 2*n; i++) y *= 2;

    printf("%d", y);
    
    return 0;

}