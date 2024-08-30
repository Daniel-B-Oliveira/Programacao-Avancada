#include <stdio.h>
#include <math.h>

// Escreva um programa para calcular as raízes da equação de 2o grau, sabendo que ax^2 + bx + c = 0. A constante a tem que ser diferente de zero,  caso seja igual, imprima “Nao eh equacao de segundo grau.”

int main()
{
    float a, b, c, delta, x1, x2;
    scanf("%f %f %f", &a, &b, &c);

    if(a == 0)
    {
        printf("Nao eh equacao de segundo grau.");
    }else
    {
        delta = pow(b,2) - 4*a*c;
        if(delta >= 0)
        {
            x1 = (-b + sqrt(delta)) / 2*a;
            x2 = (-b - sqrt(delta)) / 2*a;
            printf("As raizes da equacao sao: x = %.2f e x = %.2f", x1, x2);
        }else printf("A quacao nao possui raizes pertencentes ao conjunto dos numeros reais");
    }   return 0;
}