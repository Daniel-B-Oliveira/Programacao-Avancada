#include <stdio.h>

/*
    Faça um programa que escreva uma mensagem que corresponde a cada dia da
    semana, dependendo do que o usuário digitar (podem ser dígitos de 1 a 7). Por
    exemplo, se o usuário digitar 1, escreva “Segunda-feira”; 2, “Terça-feira”; 3,
    “Quarta-feira”, e assim sucessivamente. Faça isso enquanto o usuário
    responder com a letra ‘S’ à pergunta “Deseja entrar com um novo digito?”. O
    programa deve executar repetidamente, até que o usuário digite algo diferente
    de ‘S’. Para isso, use as estruturas do-while e switch-case.
*/

int main()
{
    int dia;
    char p;

    do{
        scanf("%d", &dia);
        fflush(stdin);

        switch(dia)
        {
            case 1: printf("Segunda-feira"); break;
            case 2: printf("Terca-feira"); break;
            case 3: printf("Quarta-feira"); break;
            case 4: printf("Quinta-feira"); break;
            case 5: printf("Sexta-feira"); break;
            case 6: printf("Sabado"); break;
            case 7: printf("Domingo"); break;
            default: printf("Este dia nao existe");
        }
        printf("\nDeseja entrar com um novo digito? ");
        scanf("%c", &p);
    }while(p == 'S');
    return 0;
}