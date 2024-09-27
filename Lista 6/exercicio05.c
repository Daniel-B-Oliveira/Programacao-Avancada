#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/*
    Crie um programa capaz de ler os dados de uma matriz quadrada 4x4 de inteiros. Ao
    final da leitura o programa deverá imprimir o número da linha que contém o menor
    dentre todos os números lidos.
*/

int main()
{
    int M[4][4], i, j, m, men_lin;
    time_t t;
    srand((unsigned)time(&t));

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            M[i][j] = rand()%101;
            printf("%4d", M[i][j]);
        }printf("\n");
    }printf("\n");

    m = M[0][0];
    men_lin = 0;

    for(i=0; i<4; i++)
        for(j=0; j<4; j++)
            if(M[i][j] < m)
            {
                m = M[i][j];
                men_lin = i;
            }

    printf("Linha com menor valor: %d", men_lin);

}