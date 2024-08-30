#include <stdio.h>

// Criar um programa para identificar se um dia da semana (numerados de 1 a 7) é dia 
//de semana, fim de semana ou um dia inválido. Considere que domingo é o dia 1 e 
//sábado é o dia 7. Faça um código usando IF-ELSE aninhado e depois, outro código 
//usando switch-case.

int main()
{
    int dia;
    scanf("%d", &dia);

    switch(dia)
    {
        case 1:
        case 7: printf("Final de Semana"); break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6: printf("Dia de semana"); break;
        default: printf("Dia invalido");
    } return 0;
}