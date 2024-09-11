#include <stdio.h>

/*
    Entrar com 10 números inteiros em um vetor e mostrar quais destes números são
    múltiplos de três.
*/

int main()
{
    int num[10], i;

    for(i=0; i<10; i++) scanf("%d", &num[i]);
    for(i=0; i<10; i++) if(num[i] % 3 == 0) printf("%d ", num[i]);
    
    return 0;
}