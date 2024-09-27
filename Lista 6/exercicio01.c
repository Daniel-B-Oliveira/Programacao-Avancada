#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Sendo A e B duas matrizes de inteiros 10x10, faça um programa em C que armazene
    na matriz C a soma de A e B.
*/

int main()
{
    int A[10][10], B[10][10], C[10][10], i,j;
    time_t t;
    srand((unsigned) time(&t)); 


    for(i=0; i<10; i++)
        for(j=0; j<10; j++)
        {
            A[i][j] = rand()%101;
            B[i][j] = rand()%101;
        }

    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("%4d", C[i][j]);
        }printf("\n");
    }
    return 0;
}