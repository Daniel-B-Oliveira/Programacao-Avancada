#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/*
    (Produto de Matrizes) Seja A uma matriz de reais 3x3, e B uma matriz de reais 3x3.
    Armazene em uma matriz C o produto de A por B.
*/

int main()
{
    int i, j, k;
    float A[3][3], B[3][3], C[3][3], prod;
    
    time_t t;
    srand((unsigned) time(&t));

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            A[i][j] = (float)(rand()%11)/(rand()%11);
            printf("%5.2f", A[i][j]);
        }printf("\n");
    }printf("\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            B[i][j] = (float)(rand()%11)/(rand()%11);
            printf("%5.2f", B[i][j]);
            C[i][j] = 0;
        }printf("\n");
    }printf("\n");

    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
        {
            prod=1;
            for(k=0; k<3; k++)
            {
                C[i][j] += A[i][k]*B[k][j];
            }
        }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%5.2f", C[i][j]);
        }printf("\n");
    }

    return 0;

}









