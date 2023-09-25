//Faça um programa que some todos os números naturais até o valor inserido pelo usuário
#include <stdio.h>
#include <conio.h>

int funcao(int num)
{
    int soma = 0;

    for(int i = 1; i <= num; i++)
    {
        soma += i;
    }

    return soma;
}


int main(void)
{
    int num, soma;

    printf("Digite o numero: ");
    scanf("%d", &num);

    soma = funcao(num);

    printf("%i", funcao(num));
}