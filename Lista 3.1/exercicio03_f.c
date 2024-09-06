#include <stdio.h>
#include <math.h>

/*
    Escreva um código correspondente para calcular cada um dos seguintes 
    somatórios (o aluno deverá encontrar o temo geral TN para, então, 
    implementar o programa):
        f) S = 2 + 8 + 32 + 128 + ... + TN.
*/

// an = a(n-1) * 4 ; a1 = (1/2)*4; an = (2^n) / 2; n >= 1

int main()
{
    int n, i;
    float s = 0;

    scanf("%d", &n);

    for(i=1; i <= n; i++) s += pow(4,i) / 2;
    printf("%.0f", s);
    return 0;
}

