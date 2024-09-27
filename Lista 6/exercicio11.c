#include <stdio.h>
// #include <time.h>
// #include <stdlib.h>

/*
    Na teoria dos sistemas, define-se como elemento minimax de uma matriz o menor
    elemento de uma linha onde se encontra o maior elemento da matriz. Faca um
    programa que recebe uma matriz A 10x10 de reais e imprima o seu elemento minimax,
    juntamente com a sua posição.
*/

int main()
{
    float M[10][10], maior, minimax;
    int i, j, linha, coluna;
    
    // time_t t;
    // srand((unsigned) time(&t));

    for(i=0; i<10; i++)
        for(j=0; j<10; j++)
            // M[i][j] = rand()%11;
            scanf("%f", &M[i][j]);

    // for(i=0; i<10; i++)
    // {
    //     for(j=0; j<10; j++)
    //     {
    //         printf("%3.0f", M[i][j]);
    //     }printf("\n");
    // }printf("\n");


    maior = M[0][0];

    for(i=0; i<10; i++)
        for(j=0; j<10; j++)
            if(M[i][j] > maior)
            {
                maior = M[i][j];
                linha = i;
            }

    minimax = M[linha][0];


    for(j=0; j<10; j++)
    {
        if(M[linha][j] < minimax)
        {
            minimax = M[linha][j];
            coluna = j;
        }
    }
    printf("Minimax: %.2f\nposicao: (%2d,%2d)", minimax, linha+1, coluna+1);

    return 0;
}