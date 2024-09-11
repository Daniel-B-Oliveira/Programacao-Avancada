#include <stdio.h>

// Entrar com duas palavras, e verifique qual delas aparece antes no dicionário.

int main()
{
    char p1[50], p2[50];
    int i;

    // printf("%c %c", 65, 65+32);

    for(i=0; i<50; i++)
    {
        scanf("%c", &p1[i]);
        if(p1[i] == '\n') break;
        if(p1[i] >= 'A' && p1[i] <= 'Z') p1[i] += (char) 32; //Transforma letras maiusculas em minusculas
    }

    fflush(stdin);

    for(i=0; i<50; i++)
    {
        scanf("%c", &p2[i]);
        if(p2[i] == '\n') break;
        if(p2[i] >= 'A' && p2[i] <= 'Z') p2[i] += (char) 32;
    }

    for(i=0; i<50; i++)
    {
        if(p1[i] == '\n' || p2[i] == '\n')
        {
            if(p1[i] == p2[i])
                printf("As palavras sao iguais");
            else if(p1[i] == '\n')
                printf("A palavra 1 vem antes");
            else
                printf("A palavra 2 vem antes");
            break;
        }

        if(p1[i] < p2[i])
        {
            printf("A palavra 1 vem antes");
            break;
        }

        if(p1[i] > p2[i])
        {
            printf("A palavras 2 vem antes");
            break;
        }
    }
    



}