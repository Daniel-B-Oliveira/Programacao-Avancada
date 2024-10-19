#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa com um procedimento para criar um
    arquivo “texto.txt”, salvando um texto qualquer digitado pelo usuário. Com uma
    função, calcule o número de caracteres do arquivo. Para tal, use a feof(), que verifica
    se chegou o fim do arquivo.
*/

void cria_arquivo()
{
    FILE *arquivo;
    char texto[1000];

    arquivo = fopen("texto.txt", "w");

    if (arquivo == NULL) exit(1);

    fgets(texto, 1000, stdin);
    fputs(texto, arquivo);

    fclose(arquivo);

}

int contar_caracter()
{
    FILE *arquivo;
    int n=0;

    arquivo = fopen("texto.txt", "r");

    if (arquivo == NULL) exit(1);

    while(!feof(arquivo))
    {
        if(fgetc(arquivo) != EOF) n++;
    }

    fclose(arquivo);

    return n;

}


int main()
{
    cria_arquivo();
    printf("%d", contar_caracter());
    return 0;
}