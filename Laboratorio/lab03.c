#include <stdio.h>

int main()
{
/*
    float matriz[3][3], menor, d_pri=0, d_sec=0, soma=0;
    int i, j;

    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
    {
        scanf("%f", &matriz[i][j]);

        if(i==0 && j==0) menor = matriz[i][j];
        else if(matriz[i][j] < menor) menor = matriz[i][j];

        soma += matriz[i][j];

        if(i == j) d_pri += matriz[i][j];
        if((i + j) == 3 - 1) d_sec += matriz[i][j];
    }

    printf("Menor %.3f.\n", menor);
    printf("Soma diag: %.3f.\n", d_pri);
    printf("Soma diag sec: %.3f.\n", d_sec);
    printf("Media %.3f.", soma/9);

    return 0;
*/
    int matriz[4][4], i, j, nulo, t;

    for(i=0; i<4; i++)
    {
        t = 0;
        for(j=0; j<4; j++)
        {
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] == 0) t++;
        }
        if(t == 4) nulo++;
    }

    printf("Contem %d linha(s) nula(s).", nulo);

    return 0;
}
