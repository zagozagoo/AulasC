//Neste exemplo, o programa oferece três opções: adicionar números à lista, mostrar a lista e sair do programa.
//Ele aloca memória dinamicamente para a lista de números usando malloc e redimensiona a lista conforme necessário usando realloc
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *lista = NULL; // Inicialmente, a lista está vazia
    int tamanho = 0;   // O tamanho atual da lista

    int opcao;
    int numero;

    do {
        printf("Escolha uma opção:\n");
        printf("1. Adicionar número\n");
        printf("2. Mostrar lista\n");
        printf("3. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite um número: ");
                scanf("%d", &numero);

                // Alocar memória para o novo número
                int *nova_lista = (int *)malloc((tamanho + 1) * sizeof(int));

                if (nova_lista == NULL) {
                    printf("Erro na alocação de memória.\n");
                    return 1;
                }

                // Copiar os elementos da lista existente para a nova lista
                for (int i = 0; i < tamanho; i++) {
                    nova_lista[i] = lista[i];
                }

                // Adicionar o novo número à nova lista
                nova_lista[tamanho] = numero;

                // Incrementar o tamanho
                tamanho++;

                // Liberar a memória da lista anterior
                free(lista);

                // Atualizar a lista para apontar para a nova lista
                lista = nova_lista;

                break;
            case 2:
                printf("Lista de números: ");
                for (int i = 0; i < tamanho; i++) {
                    printf("%d ", lista[i]);
                }
                printf("\n");
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
