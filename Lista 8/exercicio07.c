#include <stdio.h>

/*
    Calcule a soma de duas matrizes usando procedimentos, sendo matrizes de inteiros
    3x3.
*/

void soma_matriz(int A[3][3], int B[3][3], int C[3][3])
{
    int i,j;
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            C[i][j] = A[i][j] + B[i][j];
}

void ler_matriz(int A[3][3])
{
    int i, j;
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d", &A[i][j]);
}

void mostrar_matriz(int A[3][3])
{
    int i, j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%5d", A[i][j]);
        printf("\n");
    }
}

int main()
{
    int M1[3][3], M2[3][3], M3[3][3];

    ler_matriz(M1);
    mostrar_matriz(M1);

    ler_matriz(M2);
    mostrar_matriz(M2);

    soma_matriz(M1, M2, M3);
    printf("\nSoma matriz:\n");
    mostrar_matriz(M3);

    return 0;
}