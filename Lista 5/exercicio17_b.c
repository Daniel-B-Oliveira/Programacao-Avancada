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
    char string_nor[100], string_inver[100];
    int i, j;
  
    for(i=0; i<100; i++){
        scanf("%c", &string_nor[i]);
        if(string_nor[i] == '\n') break;
    } 
    
    for(j=0; j <= i; j++)
        string_inver[j] = string_nor[i-j];

    printf("%s", string_inver);


    return 0;
}