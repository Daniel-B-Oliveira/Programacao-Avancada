#include <stdio.h>
#include <string.h>

/*
    Faça uma função que calcule o tamanho de uma string, e um
    procedimento que inverta o conteúdo de uma string. Não utilize strlen() nem strrev().
*/

int tamanho(int n, char s[n])
{
    int i=0;
    while(s[i] != '\0' && i < n) i++;
    return i;
}

void copiar_string(int n, char destino[n], char origem[n])
{
    int i=0;
    while(destino[i] != '\0' && i < n)
    {
        destino[i] = origem[i];
        i++;
    } destino[i] = '\0';
}

void inveter_string(int n, char s[n])
{

    int i=0, max;
    char aux[n];

    max = tamanho(n, s);
    copiar_string(n, aux, s);

    while(i < max)
    {
        s[i] = aux[max-i-1];
        i++;
    } s[max] = '\0';
}

int main()
{
    char s[100] = "exemplo";
    
    printf("%s\n", s);
    
    inveter_string(100, s);
    printf("%s", s);

    return 0;
}