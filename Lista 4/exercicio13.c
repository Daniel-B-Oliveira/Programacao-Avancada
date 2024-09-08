#include <stdio.h>

/*
    Faça um programa que leia o código dos produtos pedidos e as quantidades
    desejadas; calcule e mostre o valor a ser pago por produto (preço *
    quantidade) e o total do pedido. Considere que o cliente deve informar quando
    o pedido deve ser encerrado.
*/

int main()
{
    int cod, qtd;
    float total = 0;
    char perg;

    do{
        printf("Codigo: ");
        scanf("%d", &cod);
        printf("Quantidade: ");
        scanf("%d", &qtd);
        fflush(stdin);

        switch(cod)
        {
            case 1:                             //Cachorro-quente
            case 4: total += 6 * qtd; break;    //Misto quente
            case 2:                             //Hamburguer
            case 3: total += 12 * qtd; break;   //Cheese Burguer
            case 5: total += 2.5 * qtd; break;  //Refrigerante
            default: total += 0;
        }

        printf("Digite 'c' para continuar");
        scanf("%c", &perg);

    }while(perg == 'c');

    printf("Total: R$%.2f.", total);
    return 0;

}