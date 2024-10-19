#include <stdio.h>

void troca(char v[100]){
    int i;
    for(i=0; i<100; i++)
    {
        if(v[i] == 'a') v[i] = 'A';
        else if(v[i] == '\0') i=100;
    }
}


int main()
{
    char vetor[100];
    gets(vetor);

    troca(vetor);

    printf("%s", vetor);

}
