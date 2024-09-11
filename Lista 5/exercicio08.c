#include <stdio.h>

/*
    Copiar de um vetor A de reais de tamanho 10 para outro vetor B, na ordem inversa.
    No fim, o programa deve imprimir o vetor B.
*/

int main()
{
    int i;
    float A[10], B[10];

    for(i=0; i<10; i++) scanf("%f", &A[i]);
    
    for(i=0; i<10; i++)
    {
        B[i] = A[9-i];
        printf("%.3f ", B[i]);
    } return 0;
}