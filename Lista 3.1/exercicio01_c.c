#include <stdio.h>
#include <math.h>

/*
    De acordo com os códigos abaixo, verifique o que está ERRADO para calcular
    os somatórios S:
        c) S = 3 + 5 + 7 + ... + (N + 2)

            #include <stdio.h>
            #include <math.h>
            int main ()
            {
                int N, i, S;
                printf("Entre com o valor de N:\n");
                scanf("%d",&N);
                S = 0;
                for(i=0;i<=N;i++)
                {
                S = S + (i+2);
                }
                printf(“S = %d”, S);
                return 0;
            }
*/

int main ()
{
    int N, i, S;

    printf("Entre com o valor de N:\n");
    scanf("%d",&N);
    
    S = 0;
    for(i=1; i <= N ;i += 2)
        S = S + (i+2);

    printf("S = %d", S);
    return 0;
}
