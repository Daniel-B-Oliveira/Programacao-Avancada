#include <stdio.h>
#include <string.h>

/*
    Verificar se uma palavra/frase é palíndromo, ou seja, se ela é igual ao seu inverso. Por
    exemplo, a palavra RAIAR é um palíndromo. Considere o máximo de 30 caracteres.
*/

int main()
{
    char palavra[30], inversa[30];

    //fgets(palavra, sizeof(palavra), stdin);
    scanf("%[^\n]s", palavra);
    
    strcpy(inversa, palavra);
    strrev(inversa);

    if(strcmp(palavra, inversa) == 0 ) printf("%s eh palindromo", palavra);
    else printf("%s nao eh palindromo", palavra);

    return 0;
}