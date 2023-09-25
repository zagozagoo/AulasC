//leia três valores enquanto a soma desses três valores não resultarem em 45 o sistema repetirá seu processo.
#include <stdio.h>

int main(void)
{
    int val1, val2, val3;
    while (1)
    {
        printf("\nEscolha o primeiro valor:");
        scanf("%d", &val1);
        printf("\nEscolha o segundo valor:");
        scanf("%d", &val2);
        printf("\nEscolha o terceiro valor:");
        scanf("%d", &val3);
        if (val1+val2+val3 !=45)
        {
            printf("\nTente novamente!");
        }
        else
        {
            printf("\nNumero correto! 45");
            break;
        }
    }
}