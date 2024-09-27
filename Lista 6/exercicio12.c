#include <stdio.h>

/*
    Uma matriz quadrada de inteiros é chamada de "quadrado mágico" se a soma dos
    elementos de cada linha, a soma dos elementos de cada coluna e a soma dos
    elementos das diagonais principal e secundária são todos iguais. Exemplo: A matriz
    abaixo representa um quadrado mágico:
                                | 8  0 7 |
                                | 4  5 6 |
                                | 3 10 2 |
    Escreva um programa que verifica se uma matriz de 3 linhas e 3 colunas representa
    um quadrado mágico.
*/

int main()
{
    int M[3][3], i, j, S=0, C;

    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d", &M[i][j]);

    for(i=0; i<3; i++)
        S += M[i][i];
    
    for(i=0; i<3; i++)
    {
        C = 0;
        for(j=0; j<3; j++)
            C += M[i][j];
        if(C != S) break;
    }

    if(C == S)
    {
        for(i=0; i<3; i++)
        {
            C = 0;
            for(j=0; j<3; j++)
                C += M[j][i];
            if(C != S) break;
        }
        if(C==S) printf("Eh um quadrado magico");
        else printf("Nao eh um quadrado magico");
    }else printf("Nao eh um quadrado magico");

    return 0;

}