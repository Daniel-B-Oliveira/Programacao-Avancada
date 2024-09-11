#include <stdio.h>

/*
    Entrar com dois conjuntos de valores inteiros, em dois vetores de 5 posições cada, e
    efetue a soma dos termos de cada vetor, armazenando em um terceiro vetor. Por ex.
    C[i] = A[i] + B[i]. Ao final, mostre o vetor com os resultados das somas.
*/

int main()
{
    int A[5], B[5], C[5], i;

    for(i=0; i<5; i++) scanf("%d", &A[i]);
    for(i=0; i<5; i++) scanf("%d", &B[i]);
    
    for(i=0; i<5; i++)
    {
        C[i] = A[i] + B[i];
    }

    for(i=0; i<5; i++) printf("%d ", C[i]);
    return 0;
}