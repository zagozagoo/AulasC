// Aloque memória dinamicamente para ler um novo tipo de dados criado por você.
//Você deverá ler veículos(Modelo, Fabricante ,Cor, Ano, Valor).
//Quem decide a quantidade de veículos a serem lidos é o usuário do programa.
//Insira em um arquivo de texto os veículos e mostre dentro do programa a lista inserida.




















#include <stdio.h>

// Definição da estrutura de imóvel
struct Imovel {
    float valor;
    char local[100];
    int qtdPecas;
    int comPiscina;
};

int main() {
    // Criação da estrutura de imóvel e preenchimento dos dados
    struct Imovel imovel;
    
    printf("Informe o valor do imóvel: ");
    scanf("%f", &imovel.valor);
    
    printf("Informe o local do imóvel: ");
    scanf(" %99[^\n]", imovel.local); // Lê até 99 caracteres para evitar estouro de buffer
    
    printf("Informe a quantidade de peças: ");
    scanf("%d", &imovel.qtdPecas);
    
    printf("O imóvel tem piscina? (1 para sim, 0 para não): ");
    scanf("%d", &imovel.comPiscina);
    
    // Abrindo o arquivo para escrita
    FILE *arquivo = fopen("imovel.txt", "w");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }
    
    // Escrevendo os dados no arquivo
    fprintf(arquivo, "Valor: %.2f\n", imovel.valor);
    fprintf(arquivo, "Local: %s\n", imovel.local);
    fprintf(arquivo, "Quantidade de peças: %d\n", imovel.qtdPecas);
    fprintf(arquivo, "Com piscina: %s\n", (imovel.comPiscina == 1) ? "Sim" : "Não");
    
    // Fechando o arquivo
    fclose(arquivo);
    
    printf("Informações do imóvel foram escritas no arquivo 'imovel.txt'.\n");
    
    return 0;
}
