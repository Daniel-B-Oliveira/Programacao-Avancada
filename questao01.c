#include <stdint.h>

float potencia(int a, int b){
    if(b==0) return 1;
    if(b > 0)
        return a*potencia(a, b-1);
    else
        return (1.0/a)*potencia(a, b+1);
}

int main()
{
    float n;
    n = potencia(2,-1);
    printf("%f", n);

    return 0;
}
