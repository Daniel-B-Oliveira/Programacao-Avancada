#include <stdio.h>

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
