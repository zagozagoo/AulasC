//Faça um programa que imprima todos os números pares até o valor que foi inserido pelo usuário.
#include <stdio.h>
#include <conio.h>

int main(void)
{
    int num, escolha;

    printf("\nDigite seu numero: ");
    scanf("%d", &escolha);

    for (num=0; num<=escolha; num+=2)
    {
        printf("%d ", num);
    }
}