#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
    Verifique se uma matriz é esparsa. Para ser esparsa, considere que mais que 75% de
    uma matriz 4x4 é zero. 
*/

int main()
{
    int M[4][4], i, j, m0 =0;
    time_t t;
    
    srand((unsigned)time(&t));

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            M[i][j] = rand()%2;
            if(M[i][j] == 0) m0++;
            printf("%2d", M[i][j]);
        }printf("\n");
    }printf("\n");

    if(m0>=12) printf("Eh esparca (%d).",m0);
    else printf("Nao eh esparca (%d).", m0);

    return 0;
}