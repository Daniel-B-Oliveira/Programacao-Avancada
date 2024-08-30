#include <stdio.h>

/*
    O cardápio de uma lanchonete é o seguinte:  EXERCICIO 19 LISTA 2.
    Implemente um programa que leia o código do item pedido, a quantidade e calcule o 
    valor a ser pago por aquele lanche. Considere que a cada execução somente será 
    calculado um item. Use o comando switch-case. 
*/

int main()
{
    int cod, n;
    float tval;   //tval: valor total

    printf("Digite o codigo do produto: ");
    scanf("%d", &cod);

    printf("Digite a quatidade: ");
    scanf("%d", &n);

    switch(cod)
    {
        case 100: tval = 9.0 * n; break;
        case 101: tval = 10.0 * n; break;
        case 102: tval = 11.0 * n; break;
        case 103: tval = 10.0 * n; break;
        case 104: tval = 15.0 * n; break;
        case 105: tval = 3.0 * n; break;
        default: {printf("Este produto nao existe."); return 0;}
    }

    printf("Valor total: %.2f", tval);
    return 0;
}