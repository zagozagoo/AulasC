//Faça um jogo da forca em linguagem C onde o usuário consiga adivinhar
//a palavra com o número máximo de tentavas sendo 6. O programa deve ser
//feito todo baseado em funções.
#include <stdio.h>
#include <string.h>

#define maxtentativas 6//pré-processador que declara a constante que NAO podera ser modificada

//saber se a letra esta na palavra
int letrapertence(char letra, char palavra[], int tamanhopalavra)
{
    for (int i = 0; i < tamanhopalavra; i++)
    {
        if (palavra[i] == letra)
        {
            return 1;
        }
    }
    return 0; //quando sair desse for ele volta 0 false
}

//progresso
void progresso(char palavra[], char letrasCertas[], int tamanhopalavra)
{
    for (int i = 0; i < tamanhopalavra; i++)
    {
        if (letrapertence(palavra[i], letrasCertas, strlen(letrasCertas))) //strlen retorna o tamanho da string
        {
            printf("%c ", palavra[i]); //%c= caractere
        } else
        {
            printf("_ ");
        }
    }
    printf("\n");
}

int main() {
    char palavraSecreta[50];
    char letrasCertas[26] = {0}; //array para pegar as letras certas
    int tentativas = 0;
    int palavraDescoberta = 0;

    printf("Digite a palavra secreta: ");
    scanf("%s", palavraSecreta);
    system ("cls");

    int tamanhoPalavra = strlen(palavraSecreta);

    while (tentativas < maxtentativas && !palavraDescoberta)
        {
        char letra;
        printf("\nTentativas restantes: %d\n", maxtentativas - tentativas);
        progresso(palavraSecreta, letrasCertas, tamanhoPalavra);
        printf("Digite uma letra: ");
        scanf(" %c", &letra); //o espaço antes do %c limpa o buffer do teclado

        if (letrapertence(letra, letrasCertas, strlen(letrasCertas)))
        {
            printf("Você já tentou essa letra. Tente outra.\n");
            continue;
        }

        letrasCertas[strlen(letrasCertas)] = letra; //add a letra ao array de letras certas


        if (!letrapertence(letra, palavraSecreta, tamanhoPalavra)) //! é operador de negacao, inverte true e false
        //! ta verificando se a função letrapertence retorna 0, ou seja, que a letra enviada pelo user nao pertence à palavra secreta
        {
            tentativas++;
            printf("Letra incorreta. Tente novamente.\n");
        } else
        {
            printf("Letra correta!\n");
        }

        //verifica se todas as letras foram adivinhadas
        palavraDescoberta = 1;
        for (int i = 0; i < tamanhoPalavra; i++)
        {
            if (!letrapertence(palavraSecreta[i], letrasCertas, strlen(letrasCertas)))
            {
                palavraDescoberta = 0;
                break;
            }
        }
    }

    if (palavraDescoberta)
    {
        printf("Parabens! Voce adivinhou a palavra: %s\n", palavraSecreta);
    } else
    {
        printf("Voce perdeu! A palavra era: %s\n", palavraSecreta);
    }

    return 0;
}