#include <stdio.h>

/*
    Faça um programa para ler um ano de nascimento e ano atual. Imprimir a idade
    da pessoa. Execute isto até que o usuário deseje parar.

*/

int main()
{
    int ano_nasc, ano_atual;
    char perg;  // pergunta

    do{
        scanf("%d %d", &ano_nasc, &ano_atual);
        fflush(stdin);
        printf("%d anos.\n", ano_atual - ano_nasc);

        printf("Digite 'c' para continuar: ");
        scanf("%c", &perg);
    }while(perg == 'c');

    return 0;
}