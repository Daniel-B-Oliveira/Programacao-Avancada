#include <stdio.h>

/*
    Calcule a seguinte equação: y = x^3 + 3x^2 -x + 2.
    Considere x um valor real dado pelo usuário. Para tal,
    implemente uma função para essa equação.
*/

float equacao(float x)
{
    return x*x*x + 3*x*x - x + 2;
}

int main()
{
    float a;
    scanf("%f", &a);
    printf("%.3f", equacao(a));
    return 0;
}
