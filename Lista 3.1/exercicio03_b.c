#include <stdio.h>

/*
    Escreva um código correspondente para calcular cada um dos seguintes 
    somatórios (o aluno deverá encontrar o temo geral TN para, então, 
    implementar o programa):
    
    b) S = 2 + 4 + 6 + 8 + ... +  TN. 
*/

int main()
{
    int i, n, s = 0;

    scanf("%d", &n);
    for(i=1; i <= n; i++) s += 2*i;

    printf("S = %d", s);
    return 0;
}