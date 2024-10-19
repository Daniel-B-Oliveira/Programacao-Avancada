#include <stdio.h>

/*
    Faça um programa para calcular a potência de x elevado a y, sendo x e y dados de
    entrada do usuário. O programa deve rodar enquanto o usuário permitir, pedindo
    novos valores de x e y a cada rodada. Não se pode usar o pow, então para tal, deve
    existir uma função que calcula a potência.
*/

float potencia(int a, int b){
    if(b==0) return 1;

    if(b > 0)
        return a*potencia(a, b-1);

    return (1.0/a)*potencia(a, b+1);
}

int main()
{
    float n;
    n = potencia(2,-1);
    printf("%f", n);

    return 0;
}
