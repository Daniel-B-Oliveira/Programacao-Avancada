#include <stdio.h>

/*
    Escreva um código correspondente para calcular cada um dos seguintes
    somatórios (o aluno deverá encontrar o temo geral TN para, então,
    implementar o programa):
        a) S = 1 + 3 + 5 + 7 + ... + TN.
*/

int main()
{
    int n, i, s=0;

    scanf("%d", &n);

    for(i=0; i <= n; i++)
        s += 2*i + 1;
        
    printf("Teste: %d", s);
    return 0;
}