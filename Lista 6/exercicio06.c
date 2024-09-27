#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/*
    Seja A uma matriz quadrada de ordem 3 de inteiros. Fazer um programa para: a)
    determinar a soma dos elementos da diagonal principal de A. b) colocar os elementos
    da diagonal principal de A em um vetor S. 
*/

int main()
{
    int M[3][3], v[3], i, j, S=0;
    time_t t;
    srand((unsigned) time(&t));

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            M[i][j] = rand()%11;
            printf("%3d", M[i][j]);
            if(i==j)
            {
                S += M[i][j];
                v[i] = M[i][j];
            }
        }printf("\n");
    }printf("\n");

    printf("a) S = %d\n", S);
    printf("b) Diag. princ:");
    for(i=0; i<3; i++)
        printf(" %d",M[i][i]);

    return 0;

}