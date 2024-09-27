#include <stdio.h>

/*
    Considere uma matriz 2x4, sendo que em cada linha há 4 notas. Armazene a média
    de cada linha i no vetor Media na posição i. Ao final, mostre a média total do vetor.
*/

int main()
{
    float M[2][4], v[2], s=0;
    int  i, j;

    for(i=0; i<2; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%f", &M[i][j]);
            s += M[i][j];
        }
        v[i] = s/4;
        s=0;
    }

    for(i=0; i<2; i++)
    {
        s += v[i];
        printf("%.3f ", v[i]);
    }

    printf("\nMedia: %.3f", s/2);

}