#include <stdio.h>

int fatorial(int n)
{
    if (n==0) return 1;
    return n*fatorial(n-1);
}

float serie(int n)
{
    if (n == 0) return 1;
    return (float) 1/fatorial(n) + 1/fatorial(n-1);
}

int main()
{
    printf("%d\n", fatorial(10));

    printf("%f", serie(3));
    return 0;
}
