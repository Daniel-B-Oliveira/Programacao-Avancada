#include <stdio.h>

void troca(char v[100]){
    int i;
    for(i = 0; v[i] != '\0'; i++)
    {
        if(v[i] == 'a') v[i] = 'A';
    }
}


int main()
{
    char vetor[100];
    gets(vetor);

    troca(vetor);

    printf("%s", vetor);

}
