#include <stdlib.h>
#include <time.h>
#include <stdio.h>

// Mostre a matriz transposta de uma matriz M de números reais 5x5

int main()
{
    int M[5][5], i, j;
    time_t t;
    srand((unsigned)time(&t));

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            M[i][j] = rand()%101;
            printf("%4d", M[i][j]);
        } printf("\n");
    }

    printf("\n");

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
            printf("%4d", M[j][i]);
        printf("\n");
    }

    return 0;
    
    

}