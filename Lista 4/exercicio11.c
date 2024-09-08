#include <stdio.h>
#include <math.h>

int main()
{
    int n, i=0;

    do{
        printf("Digite um numero: ");
        scanf("%d", &n);
        while(i <= floor(n/2))
        {
            if(pow(i,2) == n) printf("%d eh um quadrado perfeito" );
            i++;
        }
    }while(n > 0);

    return 0;
}