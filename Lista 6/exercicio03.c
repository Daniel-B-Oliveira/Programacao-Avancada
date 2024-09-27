#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
    Verifique se a matriz A de números inteiros 4x4 é triangular superior. Uma matriz
    triangular superior é aquela em que os elementos abaixo da diagonal principal são
    nulos. 
*/

int main()
{
    int M[4][4], i, j;
    time_t t;
    srand((unsigned) time(&t));

    for(i=0; i<4; i++)
        for(j=0 ;j<4; j++)
            M[i][j] = rand()%2;

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%2d", M[i][j]);
        }printf("\n");
    }printf("\n");

    for(i=0; i<4; i++)
        for(j=0; j<i; j++)
            if(M[i][j] != 0) break;
    
    if(j==3) printf("Eh triangular.");
    else printf("Nao eh triangular");

    return 0;
}