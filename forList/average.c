#include <stdio.h>

//Calcular a média de N valores inseridos pelo usuário.
int main()
{
    int qtdval, val, media = 0;

    printf("\nDigite a quantidade de valores: ");
    scanf("%i", &qtdval);

    for (int i = 0; i < qtdval; i++)
    {
        printf("\nDigite o valor: ");
        scanf("%i", &val);

        media += val;
    }

    media /= qtdval;

    printf("\nA media dos valores eh: %i", media);
}