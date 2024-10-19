#include <stdio.h>
#include <string.h>

/*
    (sobre strings) Faça uma função para calcular o tamanho (número de caracteres) de
    uma string, que foi alocada com tamanho máximo de 100.
*/

int tamanho(char s[100]){
    int i = 0;
    while(s[i] != '\0' && i < 100) i++;
    return i;
}

int main()
{
    char s[100];
    gets(s);
    printf("%d", tamanho(s));
    return 0;
}