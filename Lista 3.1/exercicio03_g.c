#include <stdio.h>
#include <math.h>

/*
    Escreva um código correspondente para calcular cada um dos seguintes 
    somatórios (o aluno deverá encontrar o temo geral TN para, então, 
    implementar o programa):
        g) S = 1 + 1/2 + 1/4 + 1/8 + ... + TN.
*/

int main()
{
    int n, i;
    float s = 0;

    scanf("%d", &n);

    for(i=0; i <= n; i++) s += 1/pow(2,i);

    printf("%.4f", s);
    return 0;
}