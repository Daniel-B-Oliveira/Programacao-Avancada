#include <stdio.h>
#include <string.h>

/*
    Inverter o conteúdo do vetor de caracteres usando a função strrev da biblioteca
    string.h. Faça também outra versão do programa, sem usar a função strrev. Note que
    não é para imprimir “de trás para frente”, mas inverter o conteúdo e deste modo,
    mostrá-lo. 
*/

int main()
{
    char string[100];

    scanf("%[^\n]s", string);
    strrev(string);
    
    printf("%s", string);
}