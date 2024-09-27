#include <stdio.h>
// #include <time.h>
// #include <stdlib.h>

/*
    Faça um programa que leia duas matrizes A e B de inteiros, ambas 5x5 e calcule C =
    A-2*B.
*/

int main()
{
    int A[5][5], B[5][5], C[5][5], i, j;

    // time_t t;
    // srand((unsigned) time(&t));

    for(i=0; i<5; i++)
        for(j=0; j<5; j++)
            scanf("%d", &A[i][j]);
            // A[i][j] = rand()%11;

    for(i=0; i<5; i++)
        for(j=0; j<5; j++)
            scanf("%d", &B[i][j]);
            // B[i][j] = rand()%11;

    // for(i=0; i<5; i++)
    // {
    //     for(j=0; j<5; j++)
    //         printf("%4d", A[i][j]);
    //     printf("\n");
    // }printf("\n");

    // for(i=0; i<5; i++)
    // {
    //     for(j=0; j<5; j++)
    //         printf("%4d", B[i][j]);
    //     printf("\n");
    // }printf("\n");

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            C[i][j] = A[i][j] - 2*B[i][j];
            printf("%4d", C[i][j]);
        }printf("\n");
    }printf("\n");




}