//Faça um programa para uma escola chamada IANES que fará todo o gerenciamento de alunos, cursos, e média de alunos
//Utilize um arquivo de texto para fazer esse gerenciamento.(Escrita e leitura)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[100];
    float media;
} Aluno;

void adicionarAluno(FILE *arquivoAlunos)
{
    Aluno aluno;
    printf("\nNome do aluno: ");
    scanf("%s", aluno.nome); //aluno.nome ja eh ponteiro entao nao precisa de &
    printf("\nMedia do aluno: ");
    scanf("%f", &aluno.media);

    fprintf(arquivoAlunos, "%s %.2f\n", aluno.nome, aluno.media);
}

void listarAlunos(FILE *arquivoAlunos)
{
    Aluno aluno;

    printf("Lista de Alunos:\n");
    while (fscanf(arquivoAlunos, "%s %f", aluno.nome, &aluno.media) != EOF) //end of file
    {
        printf("Nome: %s, Média: %.2f\n", aluno.nome, aluno.media);
    }
}

int main()
{
    FILE *arquivoAlunos;
    int escolha;

    arquivoAlunos = fopen("alunos.txt", "a+"); //abre o arquivo em modo de leitura e escrita

    if (arquivoAlunos == NULL)
    {
        printf("\nErro ao abrir arquivo.\n");
        return 1;
    }

    do
    {
        printf("\nMenu:\n");
        printf("1. Adicionar Aluno\n");
        printf("2. Listar Alunos\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                adicionarAluno(arquivoAlunos);
                break;
            case 2:
                listarAlunos(arquivoAlunos);
                break;
            case 3:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    }
    
    while (escolha != 3);

    fclose(arquivoAlunos);

    return 0;
}