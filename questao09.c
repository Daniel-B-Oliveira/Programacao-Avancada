#include <stdio.h>

void entradaMatriz(int M[3][3])
{
    int i, j;
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d", &M[i][j]);

}

void mostraMatriz(int M[3][3])
{
    int i, j;
    for(i=0; i<3; i++)
    {

        for(j=0; j<3; j++)
        {
            printf("%4d",M[i][j]);
        }printf("\n");
    }
}

int verificaIdenticas(int A[3][3], int B[3][3])
{
    int i, j;
    char p;
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            if(A[i][j] != B[i][j])
            {
                i = j = 3;
            }
    if(i==3 & j==3) return 1;
    return 0;
}

int main()
{
    int matriz[3][3], matriz2[3][3];

    entradaMatriz(matriz);
    mostraMatriz(matriz);

    entradaMatriz(matriz2);
    mostraMatriz(matriz2);

    if(verificaIdenticas(matriz, matriz2) == 1) printf("As matrizes sao identicas");
    else printf("As matrizes nao sao identicas");

    return 0;


}
