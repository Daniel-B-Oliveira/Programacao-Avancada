#include <stdio.h>

int main(){
    //Faça um programa para ler um valor inteiro e escrever a mensagem É MAIOR QUE 10! se o valor lido for maior que 10, caso contrário escrever NÃO É MAIOR QUE 10!

    int n;
    scanf("%d", &n);

    if (n > 10) printf("E maior que 10");
    else printf("Nao e maior que 10");

    return 0;
}