#include <stdio.h>
#include <math.h>

/*
    Escreva um código correspondente para calcular cada um dos seguintes 
    somatórios (o aluno deverá encontrar o temo geral TN para, então, 
    implementar o programa):
        d) S = 1 + b +  b^2 + b^3 + b^4 +  ... + TN.
*/

int main()
{
    int n, i, b; 
    float s = 0;

    printf("n: ");
    scanf("%d", &n);

    printf("b: ");
    scanf("%d", &b);

    for(i=0; i <= n; i++){
        s += pow(b,i);
    } 
        
    /*
        S_n = (1 - b^n)/1-b + 1
    */

   printf("%.0f", s);
   return 0;
}