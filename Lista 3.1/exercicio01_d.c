#include <stdio.h>
#include <math.h>

/*
    De acordo com os códigos abaixo, verifique o que está ERRADO para calcular
    os somatórios S:
        d) S = 2 + 5 + 9 + 17 + ... + (2^N + 1)
            #include <stdio.h>
            #include <math.h>
            int main ()
            {
                int N, i;
                float S;
                printf("Entre com o valor de N:\n");
                scanf("%d",&N);
                S = 0;
                for(i=1;i<=N;i++)
                {
                S = pow(2,N+1);
                }
                printf(“S = %f”, S);
                return 0;
            }
*/

int main ()
{
    int N, i;
    float S;
    printf("Entre com o valor de N:\n");
    scanf("%d",&N);
    S = 0;
    for(i=0; i<=N; i++)
    {
        S += pow(2,i) + 1;
    }
    printf("S = %.0f", S);
    return 0;
}