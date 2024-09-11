#include <stdio.h>

/*
    Ler dois dados de 10 alunos, o primeiro dado representando o número do aluno e o
    segundo representando a sua altura em metros. Encontre o aluno mais baixo e o mais
    alto. Mostre o número do aluno mais baixo e do mais alto, juntamente com suas
    alturas.
*/

int main()
{
    int alunos[10], i, aluno_maior, aluno_menor;
    float alturas[10], altura_maior, altura_menor;

    for(i=0; i<10; i++)
        scanf("%d %f", &alunos[i], &alturas[i]);

    aluno_maior = aluno_menor = alunos[0];
    altura_maior = altura_menor = alturas[0];

    for(i=1; i<10; i++)
        if(alturas[i] > altura_maior)
        {
            aluno_maior = alunos[i];
            altura_maior = alturas[i];
        }else if(alturas[i] < altura_menor)
        {
            aluno_menor = alunos[i];
            altura_menor = alturas[i];
        }

    printf("Maior: %d - %.2f\nMenor: %d - %.2f", aluno_maior, altura_maior, aluno_menor, altura_menor);

}