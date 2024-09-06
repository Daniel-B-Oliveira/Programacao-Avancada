#include <stdio.h>

/*
    Escreva um código correspondente para calcular cada um dos seguintes 
    somatórios (o aluno deverá encontrar o temo geral TN para, então, 
    implementar o programa):
        c) S = b + 2b + 3b + 4b + ... + TN. 
*/

//S = b + 2b + 3b + 4b + ... + TN = b(1 + 2 + 3 + 4 + . . . + TN/b)

int main()
{
    int n,  i, b, s = 0;

    printf("n: ");
    scanf("%d", &n);
    printf("b: ");
    scanf("%d", &b);

    for(i = 1; i <= n; i++) s += i;
    s *= b;

    printf("S = %d", s);
    return 0;
}