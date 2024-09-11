#include <stdio.h>
#include <string.h>

/*
    Entrar com uma frase e converter em letras minúsculas. Dica:a função strupr(string)
    converte a string para letras maiúsculas e a função strlwr(string) para letras
    minúsculas, ambas da biblioteca string.h.
*/

int main()
{
    char frase[100];

    fgets(frase, sizeof(frase), stdin);
    strlwr(frase);
    printf("%s", frase);

    return 0;
}