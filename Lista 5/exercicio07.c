#include <stdio.h>

/*
    Entrar com uma frase, armazenando em um vetor de caracteres (aceitando espaços
    como caracteres). Depois, verifique se há a letra ‘a’ no vetor, e para cada ocorrência,
    substitua por ‘A’ maiúsculo. No fim, mostre a frase já atualizada com as devidas
    modificações.
*/

int main()
{
    char frase[100];
    int i;

    for(i=0; i<100; i++)
    {
        scanf("%c", &frase[i]);
        if(frase[i] == '\n') break;
        else if(frase[i] == 'a') frase[i] = 'A';
    }
    
    for(i=0; i<100; i++) 
    {
        printf("%c", frase[i]);
        if(frase[i] == '\n') break;
    }
}