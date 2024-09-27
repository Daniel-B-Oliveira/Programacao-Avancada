#include <stdio.h>
#include <string.h>

/*
    (Matriz com string) Considere uma matriz 10x10 de caracteres. Preencha essa
    matriz por linha (ou seja, com 10 strings, com máximo de 10 caracteres cada), e depois
    procure nesta matriz por uma string dada pelo usuário. A busca deve ser feita nas
    linhas e colunas da matriz. Mostre em quais linhas e colunas foram encontradas, e
    quantas vezes.
*/

int main()
{
    char M[10][10], busca[10], MT[10][10];
    int i, j, n=0;

    for(i=0; i<10; i++)
        fgets(M[i],sizeof(M[i]), stdin);

    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
            busca[j] = M[j][i];
        strcpy(MT[i], busca);
    }

    printf("Pesq: ");
    scanf("%s[^\n]", busca);

    for(i=0; i<10; i++)
    {
        if(strstr(M[i], busca) != NULL) n++;
        if(strstr(MT[i], busca) != NULL) n++;
    }

    printf("%d", n);
}





