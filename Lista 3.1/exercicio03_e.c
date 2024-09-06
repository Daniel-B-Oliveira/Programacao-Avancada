#include <stdio.h>
#include <math.h>

/*
    Escreva um código correspondente para calcular cada um dos seguintes 
    somatórios (o aluno deverá encontrar o temo geral TN para, então, 
    implementar o programa):
        e) S = 1/3 + 1/9 + 1/27 + 1/81 + .... + TN
*/

int main()
{
    int n, i;
    float s = 0;

    scanf("%d", &n);
    for(i=1; i <= n; i++) s += 1/pow(3,i);

    printf("%.4f", s);
    return 0;
}