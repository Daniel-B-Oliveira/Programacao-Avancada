/*
    Defina a série que está sendo calculada pelo código a seguir:
        #include <stdio.h>
        int main ()
        {
            int N, i;
            float S;
            printf("Entre com o valor de N:\n");
            scanf("%d",&N);
            S = 0;
            for(i=0;i<=N;i++)
            {
            S = S + pow(2, i+2);
            }
            printf(“S = %d”, S);
            return 0;
        }
*/

/*
    S = 2^(2) + 2^(3) + . . . + 2^(N+1)
    S = 4 + 4^2 + 4^2+1 + . . . + 4^N : Uma P.G de razão 4
    S = 4 * [(1-4^N)/(1-4)]
*/