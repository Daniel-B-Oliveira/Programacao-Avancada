#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/*
    Dada uma matriz A quadrada 3x3 de inteiros, verifique se a mesma é simétrica (isto
    é, se A[i][j] = A [j][i] para todo i e j dentro do subintervalo aos quais pertencem os
    índices).
*/

int main()
{
    int M[3][3], i, j;
    time_t t;

    srand((unsigned)time(&t));

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            M[i][j] = rand()%11;
            printf("%2d", M[i][j]);
        }printf("\n");
    }printf("\n");

    for(i=0; i<3-1; i++)
        for(j=i+1; j<3; j++)
            if(M[i][j] != M[j][i]) break;
    

    if(i==2 && j==3) printf("Eh uma matriz simetrica.");
    else printf("Nao eh uma matriz simetrica.");

    return 0;
}