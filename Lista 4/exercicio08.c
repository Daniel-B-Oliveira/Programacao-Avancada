#include <stdio.h>

/*
    Faça um programa que leia quatro números reais e imprima o maior e o menor
    valor. Se os valores forem todos iguais, imprima a mensagem “Os 4 números
    são iguais”. O programa deve executar enquanto os números forem diferentes
    entre si.
*/

int main()
{
    float a, b, c, d;
    float maior, menor;

    do{
        scanf("%f %f %f %f", &a, &b, &c, &d);
    }while(a == b || a == c || a == d || b == c || b == d || c == d);

    if(a > b && a > c && a > d) maior = a;
    else if(b > c && b > d) maior = b;
    else if(c > d) maior = c;
    else maior = d;

    if(a < b && a < c && a < d) menor = a;
    else if(b < c && b < d) menor = b;
    else if(c < d) menor = c;
    else menor = d;

    printf("Maior: %.2f\nMenor: %.2f", maior, menor);
    return 0;

}