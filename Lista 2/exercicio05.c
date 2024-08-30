#include <stdio.h>

int main() {
    //Faça um algoritmo para ler: número da conta do cliente, saldo, débito e crédito. Após, calcular e escrever o saldo atual (saldo atual = saldo - débito + crédito). Também testar se saldo atual for maior ou igual a zero escrever a mensagem 'Saldo Positivo', senão escrever a mensagem 'Saldo Negativo'.

    int n_conta;
    float saldo, debito, credito, saldo_atual;

    printf("Numero da conta: ");
    scanf("%d", &n_conta);

    printf("Saldo: ");
    scanf("%f", &saldo);

    printf("Debito: ");
    scanf("%f", &debito);

    printf("Credito: ");
    scanf("%f", &credito);

    saldo_atual = saldo - debito + credito;

    if(saldo_atual >= 0) printf("Saldo Positivo");
    else printf("Saldo Negativo");

    return 0;

}