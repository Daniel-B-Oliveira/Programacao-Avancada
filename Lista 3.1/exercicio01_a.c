#include <stdio.h>

/*
    De acordo com os códigos abaixo, verifique o que está ERRADO para calcular
    os somatórios S:
        a) S = 1 + 2 + 3 + ... + N

        #include <stdio.h>
        int main ()
        {
            int N, i, S;
            printf("Entre com o valor de N:\n");
            scanf("%d",&N);
            for(i=1;i<=N;i++)
            {
            S = N;
            }
            printf(“S = %d”, S);
            return 0;
        }
*/

int main ()
{
    int N, i, S=0;

    printf("Entre com o valor de N: ");
    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
    S += i;
    }

    printf("S = %d", S);
    return 0;
}