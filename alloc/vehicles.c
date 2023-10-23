// Aloque memória dinamicamente para ler um novo tipo de dados criado por você.
//Você deverá ler veículos(Modelo, Fabricante ,Cor, Ano, Valor).
//Quem decide a quantidade de veículos a serem lidos é o usuário do programa.
//Insira em um arquivo de texto os veículos e mostre dentro do programa a lista inserida.

#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do veículo
struct Veiculo {
    char modelo[50];
    char fabricante[50];
    char cor[20];
    int ano;
    float valor;
};

int main() {
    int numVeiculos;

    printf("Quantos veículos deseja inserir? ");
    scanf("%d", &numVeiculos);

    // Aloque memória dinamicamente para armazenar os veículos
    struct Veiculo *veiculos = (struct Veiculo *)malloc(numVeiculos * sizeof(struct Veiculo));

    if (veiculos == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Ler os veículos
    for (int i = 0; i < numVeiculos; i++) {
        printf("Veículo #%d:\n", i + 1);
        printf("Modelo: ");
        scanf("%s", veiculos[i].modelo);
        printf("Fabricante: ");
        scanf("%s", veiculos[i].fabricante);
        printf("Cor: ");
        scanf("%s", veiculos[i].cor);
        printf("Ano: ");
        scanf("%d", &veiculos[i].ano);
        printf("Valor: ");
        scanf("%f", &veiculos[i].valor);
    }

    // Abrir um arquivo de texto para escrever os veículos
    FILE *arquivo = fopen("veiculos.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Escrever os veículos no arquivo
    for (int i = 0; i < numVeiculos; i++) {
        fprintf(arquivo, "Veículo #%d\n", i + 1);
        fprintf(arquivo, "Modelo: %s\n", veiculos[i].modelo);
        fprintf(arquivo, "Fabricante: %s\n", veiculos[i].fabricante);
        fprintf(arquivo, "Cor: %s\n", veiculos[i].cor);
        fprintf(arquivo, "Ano: %d\n", veiculos[i].ano);
        fprintf(arquivo, "Valor: %.2f\n", veiculos[i].valor);
    }

    // Fechar o arquivo
    fclose(arquivo);

    // Mostrar a lista de veículos inserida
    printf("Veículos inseridos:\n");
    for (int i = 0; i < numVeiculos; i++) {
        printf("Veículo #%d\n", i + 1);
        printf("Modelo: %s\n", veiculos[i].modelo);
        printf("Fabricante: %s\n", veiculos[i].fabricante);
        printf("Cor: %s\n", veiculos[i].cor);
        printf("Ano: %d\n", veiculos[i].ano);
        printf("Valor: %.2f\n", veiculos[i].valor);
    }

    // Liberar a memória alocada
    free(veiculos);

    return 0;
}


