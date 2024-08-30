#include <stdio.h>

// Criar um programa para identificar se um dia da semana (numerados de 1 a 7) é dia 
//de semana, fim de semana ou um dia inválido. Considere que domingo é o dia 1 e 
//sábado é o dia 7. Faça um código usando IF-ELSE aninhado e depois, outro código 
//usando switch-case.

int main()
{
    int dia;
    scanf("%d", &dia);
    if(dia < 1 || dia > 7)
    {
        printf("Dia invalido");
    }else if(dia == 1 || dia == 7)
    {
        printf("Final de Semana");
    }else
    {
        printf("Dia de semana");
    } return 0;
}