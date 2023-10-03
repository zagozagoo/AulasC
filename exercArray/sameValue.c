// Leia um array com 10 posições e identifique se existem valores iguais neste array
//se existirem, envie para um outro array e o exiba na tela.
#include <stdio.h>

void receiveValues(int* arr1)
{
    for (int i = 0; i < 10; i++)
    {
            printf("\nFirst array value in position %d \n", i);
            scanf("%i", &arr1[i]);
    }
}

int main()
{
    int array[10];
    receiveValues(array);

    printf("\nArray values: ");
}