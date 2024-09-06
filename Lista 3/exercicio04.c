#include <stdio.h>

/*
    Entrar com valores inteiros e positivos para b e n, e calcular b^n
    (b elevado a n) sem usar a função pow.

*/

int main()
{
    int b, n, i, m = 1;

    scanf("%d %d", &b, &n);

    for(i = 0 ; i < n; i++) m *= b;

    printf("%d", m);
    return 0;
}