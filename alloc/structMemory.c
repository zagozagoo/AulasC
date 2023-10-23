//Neste exemplo, o programa oferece três opções: adicionar alunos à lista, mostrar a lista e sair do programa.
//Ele aloca memória dinamicamente para a lista de alunos usando malloc inicialmente e, quando necessário, redimensiona a lista com realloc para acomodar mais alunos.
//Certifique-se de liberar a memória alocada antes de sair do programa para evitar vazamentos de memória.
#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura Aluno
struct Aluno {
    char nome[50];
    float nota;
};

int main() {
    struct Aluno *lista = NULL; // Inicialmente, a lista está vazia
    int tamanho = 0;           // O tamanho atual da lista
    int capacidade = 0;        // A capacidade atual da lista

    int opcao;
    char nome[50];
    float nota;

    do {
        printf("Escolha uma opção:\n");
        printf("1. Adicionar aluno\n");
        printf("2. Mostrar lista de alunos\n");
        printf("3. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (tamanho == capacidade) {
                    // Aumentar a capacidade da lista usando realloc
                    capacidade += 5; // Aumentar a capacidade em 5 alunos
                    struct Aluno *nova_lista = (struct Aluno *)realloc(lista, capacidade * sizeof(struct Aluno));

                    if (nova_lista == NULL) {
                        printf("Erro na alocação de memória.\n");
                        return 1;
                    }

                    lista = nova_lista;
                }

                printf("Digite o nome do aluno: ");
                scanf("%s", nome);
                printf("Digite a nota do aluno: ");
                scanf("%f", &nota);

                // Adicionar o novo aluno à lista
                strcpy(lista[tamanho].nome, nome);
                lista[tamanho].nota = nota;

                // Incrementar o tamanho
                tamanho++;

                break;
            case 2:
                printf("Lista de alunos:\n");
                for (int i = 0; i < tamanho; i++) {
                    printf("Nome: %s, Nota: %.2f\n", lista[i].nome, lista[i].nota);
                }
                break;
            case 3:
                // Liberar a memória alocada para a lista
                free(lista);
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } while (opcao != 3);

    return 0;
}
