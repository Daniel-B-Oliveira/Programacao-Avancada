#include <stdio.h>
#include <string.h>

//Entrar com duas frases e verificar se uma está contida na outra. 

int main()
{
    char fra1[100], fra2[100];

    scanf("%[^\n]s", fra1);
    getchar();
    scanf("%[^\n]s", fra2);

    if(strstr(fra1, fra2) != NULL || strstr(fra2, fra1) != NULL) printf("SIm");
    else printf("Nao");

    return 0;
}