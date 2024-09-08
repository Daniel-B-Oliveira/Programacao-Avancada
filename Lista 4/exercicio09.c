#include <stdio.h>
#include <math.h>

/*
    Dado um número inteiro positivo, calcular a soma de seus dígitos. Por exemplo,
    para o número 1234, a saída deve ser 1+2+3+4 = 10.
*/

int main()
{
    float n, t, d, s = 0;    // t é a quantidade de digitos menos 1

    scanf("%f", &n);
    if(n == 0) {printf("0"); return 0;}

    t = round(log10(n));
    while(t >= 0)
    {
        d = floor(n / pow(10,t));
        n -= d * pow(10,t);
        s += d;
        t--;
    }
    printf("Soma: %.0f", s);
    return 0;
}