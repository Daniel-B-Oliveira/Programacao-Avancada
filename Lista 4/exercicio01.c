#include <stdio.h>
#include <math.h>

/*
    Escreva um programa que calcule e mostre a hipotenusa de um triângulo, onde
    a e b são seus catetos, enquanto o usuário responder com a letra ‘S’ à pergunta
    “Deseja entrar com novos valores? ”. O programa deve calcular e mostrar a
    hipotenusa, até que o usuário digite algo diferente de ‘S’.
*/

int main()
{
    char q;
    float cat1, cat2, hip;

    do{
        printf("Cateto 1: ");
        scanf("%f", &cat1);

        printf("Cateto 2: ");
        scanf("%f", &cat2);

        hip = sqrt(pow(cat1,2) + pow(cat2,2));
        printf("Hipotenusa: %.3f.\n", hip);

        printf("Deseja entrar com novos valores? ");
        
        fflush(stdin);
        scanf("%c", &q);
    }while(q == 'S');

    return 0;
}