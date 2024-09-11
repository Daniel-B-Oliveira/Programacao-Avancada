#include <stdio.h>

/*
    Suponhamos que haja o vetor A com os valores 1, 2, 3, ..., 20 armazenados. Imprima
    esses valores, com a seguinte disposição: 4 linhas, e em cada linha, 5 elementos.
    1 2 3 4 5
    6 7 8 9 10
    11 12 13 14 15
    16 17 18 19 20
*/

int main()
{
    int i, seq[20]; //seq: sequencia

    for(i=0; i<20; i++) seq[i] = i+1;
    for(i=0; i<20; i++)
    {
        if(i % 5 == 0 && i != 0) printf("\n");
        printf("%d ", seq[i]);
    }
}