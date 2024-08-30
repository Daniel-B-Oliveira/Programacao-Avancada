#include <stdio.h>

//Elabore um programa que leia um número inteiro entre 1 e 12 e imprima o mês 
//correspondente. Caso seja digitado um valor fora desse intervalo, deverá ser exibida 
//uma mensagem informando que não existe mês com esse número. 

int main()
{
    int mes;
    scanf("%d", &mes);


    switch(mes)
    {
        case 1: printf("Janeiro"); break;
        case 2: printf("Fevereiro"); break;
        case 3: printf("Marco"); break;
        case 4: printf("Abril"); break;
        case 5: printf("Maio"); break;
        case 6: printf("Junho"); break;
        case 7: printf("Julho"); break;
        case 8: printf("Agosto"); break;
        case 9: printf("Setembro"); break;
        case 10: printf("Outubro"); break;
        case 11: printf("Novembro"); break;
        case 12: printf("Dezembro"); break;
        default: printf("Nao existe um mes %d", mes);
    } return 0;
}