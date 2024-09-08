#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa que apresente quatro opções: (a) consulta saldo, (b)
    saque e (c) depósito e (d) sair. O saldo deve iniciar em R$ 0,00. A cada saque ou
    depósito o valor do saldo deve ser atualizado.
*/

int main()
{
    float saldo = 0, valor;
    char perg;

    do{
        printf("(a)Consultar saldo\n(b)Saque\n(c)Deposito\n(d)Sair\n->");
        fflush(stdin);
        scanf("%c", &perg);
        system("clear||cls");

        switch (perg)
        {
            case 'a':printf("Saldo: R$%.2f\n", saldo); break;
            case 'b': 
            {
                printf("Valor: ");
                scanf("%f", &valor);
                if(valor <= saldo) saldo -= valor;
                break;
            }
            case 'c':
            {
                printf("Valor: ");
                scanf("%f", &valor);
                if(valor >= 0) saldo += valor;
                break;
            }
            default: saldo = saldo;
        }
    }while(perg != 'd');
}