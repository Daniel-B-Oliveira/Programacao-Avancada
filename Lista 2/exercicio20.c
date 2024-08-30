#include <stdio.h>

/*
    Utilizando o comando switch-case, implemente um programa em C que lê como 
    entrada o preço de um produto e o código relativo à forma de pagamento. De acordo 
    com a tabela dada abaixo, deve ser aplicado o desconto especificado e o programada 
    deve exibir o número de prestações e o valor de cada prestação a ser paga.

    TABELA EM LISTA 2 EXERCICIO 20.
*/

int main()
{
    float valor;
    int fpag; //fpag: forma de pagamento

    printf("Digite o preco do produto: ");
    scanf("%f", &valor);
    fflush(stdin);

    printf("Digite a forma de pagamento: ");
    scanf("%d", &fpag);

    switch(fpag)
    {
        case 1: valor *= 0.7; break;
        case 2: valor *= 0.8; break;
        case 3: valor *= 0.9; break;
        case 4: fpag = 4; break;
        case 5: fpag = 5; break;
        case 6: fpag = 6; break;
        default:
            {
                printf("Forma de pagamento inexistente");
                return 0;
            }
    }

    printf("O produto sera paga em %d vezes de %.2f", fpag, valor / fpag);
    return 0;
}