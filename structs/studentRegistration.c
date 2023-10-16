//2.Construa uma estrutura aluno com nome, numero de matrícula e curso. Leia do usuário
//a informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.

#include <stdio.h>
#include <string.h>

    typedef struct 
    {
        char nome[50];
        int matricula;
        char curso[30];
    } Aluno;

int main()
{
    Aluno alunos[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\nDigite nome, numero de matricula e curso, respectivamente\n");
        scanf(" %s %i %s", &alunos[i].nome, &alunos[i].matricula, &alunos[i].curso);
    }

    printf("\n___Informacoes___\n");

    for (int i = 0; i < 5; i++)
    {
        printf("\nAluno: %s\nNumero de matricula: %i\nCurso: %s", alunos[i].nome, alunos[i].matricula, alunos[i].curso);  
        printf("\n____________\n");
    }

    return 0;
}
    