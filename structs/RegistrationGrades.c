//3.Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter
//a matrícula do aluno, nome, nota da primeira, segunda e terceira prova.

//(a) Permita ao usuario entrar com os dados de 5 alunos.
//(b) Encontre o aluno com maior nota da primeira prova.
//(c) Encontre o aluno com maior media geral.
//(d) Encontre o aluno com menor media geral
//(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovacao

#include <stdio.h>
#include <string.h>

typedef struct 
{
    int matricula;
    char nome[50];
    int primeira_nota;
    int segunda_nota;
    int terceira_nota;
    float media;

} Aluno;

int main()
{
    Aluno alunos[5];
    int maiorP1 = 0;
    float primeira_nota, segunda_nota, terceira_nota;

    for (int i = 0; i < 5; i++)
    {
        printf("\nDigite numero de matricula, nome, e notas da primeria, segunda e terceira prova, respectivamente\n");
        scanf(" %i %s %i %i %i", &alunos[i].matricula, &alunos[i].nome, &alunos[i].primeira_nota, &alunos[i].segunda_nota, &alunos[i].terceira_nota);
    }

    for (int i = 0; i < 5; i++)
    {
        if (alunos[i].primeira_nota > alunos[maiorP1].primeira_nota)
        {
            maiorP1 = i;
        }
    }

    printf("\nO aluno com maior nota da primeira avaliacao: %s\n", alunos[maiorP1].nome);

    for (int i = 0; i < 5; i++)
    {
        alunos[i].media = alunos[i].primeira_nota + alunos[i].segunda_nota + alunos[i].terceira_nota / 3;
    }

    printf("\n___Aprovaçoes___\n");
    for (int i = 0; i < 5; i++)
    {
        if (alunos[i].media >= 6)
        {
            prinft("\nAluno: %s = Aprovado!\n", alunos[i].nome);
        }
        else
        {
            prinft("\nAluno: %s = Reprovado\n", alunos[i].nome);
        }
    }
    

    return 0;
}
