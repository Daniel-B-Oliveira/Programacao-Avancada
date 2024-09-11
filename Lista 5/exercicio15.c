#include <stdio.h>
#include <string.h>

// Entrar com duas palavras, e verifique qual delas aparece antes no dicionário.

int main()
{
    char en1[50], en2[50];
    char p1[50], p2[50];
    int i;
    
    scanf("%s", en1);
    scanf("%s", en2);
    
    strcpy(p1, en1);
    strcpy(p2, en2);

    strlwr(p1);
    strlwr(p2);

    if(strcmp(p1,p2) == 0)
        printf("Palavras igauis: '%s'", en1);
    else
    {
        for(i=0; i<50; i++)
        if(p1[i] < p2[i])
        {
            printf("'%s' vem primeiro", en1);
            break;
        }else if(p1[i] > p2[i])
        {
            printf("'%s' vem primeiro", en2);
            break;
        }
    }

    return 0;
}