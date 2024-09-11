#include <stdio.h>
#include <string.h>

/*
    Ler três strings necessariamente diferentes. Enquanto houver strings iguais, peça para
    o usuário digitar novamente. Depois, concatene as strings e mostre o resultado final,
    juntamente com o tamanho da nova string
*/

int main()
{
    char frase[3][100], frase_junta[302], igual = 's';
    int i,j;
    
    do{
        printf("\nEscreva\n");
        for(i=0; i<3; i++)
        {
            scanf("%[^\n]s", frase[i]);
            fflush(stdin);
        }
        for(i=0; i<3; i++)
            for(j=0; i<3; i++)
                if(i != j)
                    if(strcmp(frase[i], frase[j]) == 0)
                        igual = 's';
                    else
                        igual = 'n';
    }while(igual == 's');
    


    strcpy(frase_junta, frase[0]);
    for(i=1; i<3; i++)
    {
        strcat(frase_junta, " ");
        strcat(frase_junta, frase[i]);
    }
    
    printf("%s", frase_junta);

}