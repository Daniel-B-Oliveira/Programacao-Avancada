#include <stdio.h>

/*
    Faça programa que leia uma matriz 3x6 com valores reais.
        (a) Imprima a soma de todos os elementos das colunas ímpares.
        (b) Imprima a média aritmética dos elementos da segunda e quarta colunas.
        (c) Substitua os valores da sexta coluna pela soma dos valores das colunas 1 e 2.
        (d) Imprima a matriz modificada.
*/

int main()
{
    int i,j;
    float M[3][6], soma_a=0, soma_b=0;

    for(i=0; i<3; i++)
        for(j=0; j<6; j++)
            scanf("%f", &M[i][j]);

    for(i=0; i<3; i++)
    {
        for(j=0; j<6; j+=2)
            soma_a += M[i][j];
        
        for(j=1; j<4; j+=2)
            soma_b += M[i][j];

        M[i][5]= 0;
        for(j=0; j<2; j++)
            M[i][5] += M[i][j];
    }

    printf("a) %.2f\n", soma_a);
    printf("b) %.2f\n", soma_b/8);
    printf("c)\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<6; j++)
            printf("%3.2f ", M[i][j]);
        printf("\n");
    }

    return 0;
}