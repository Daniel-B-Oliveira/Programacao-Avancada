#include <stdio.h>

//Ler um vetor de 100 posições e verifique se todos os valores são iguais.

const int N = 100;

int main()
{
    float vetor[N]; 
    int i;

    for(i=0; i<N; i++)
    {
        scanf("%f", &vetor[i]);
        if(vetor[i] != vetor[0]) break;
    }

    if(i == N) printf("O vetor possui todas as posicoes iguais");
    else printf("O vetor nao possui todas as posicoes iguais");

    return 0;
}