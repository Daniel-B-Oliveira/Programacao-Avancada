#include <stdio.h>
#include <math.h>

/*
    Dizemos que um número inteiro é triangular se ele é o produto de 3 números
    inteiros consecutivos. Por exemplo, 120 é triangular pois 4 * 5 * 6 é igual a 120.
    Dado um número inteiro positivo n, verificar se n é triangular.
*/

int main()
{
    int n, i=2;
    scanf("%d", &n);

    while(i <= floor(n/2))
    {
        if(i*(i+1)*(i+2) == n) printf("%d = %d * %d * %d", n, i, i+1, i+2);
        i++;
    }

    return 0;

}