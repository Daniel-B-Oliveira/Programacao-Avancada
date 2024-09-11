#include <stdio.h>

/*
    Entrar com uma sequência binária S de 10 dígitos e verificar, se de fato, é binária (ou
    seja, se é composta por 0’s ou 1’s).
*/

int main()
{
    int s[10], i;

    for(i=0; i<10; i++)scanf("%d", &s[i]);
    for(i=0; i<10; i++) if(!(s[i] == 0 || s[i] == 1)) break;

    if(i == 10) printf("A sequencia e binaria.");
    
    else printf("A sequencia nao e binaria.");
    return 0;
}