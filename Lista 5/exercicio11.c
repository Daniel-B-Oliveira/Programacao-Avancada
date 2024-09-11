#include <stdio.h>

/*
    Faça um programa para entrar com um vetor de reais de tamanho 12, e verifique se é
    um vetor nulo (ou seja, onde todos os elementos são zeros).
*/

int main()
{
    float reais[12];
    int i;

    for(i=0; i<12; i++)
    {
        scanf("%f", &reais[i]);
        if(reais[i] != 0) break;
    }

    if(i==12) printf("O vetor e nulo");
    else printf("O vetor nao e nulo");

    return 0;
}