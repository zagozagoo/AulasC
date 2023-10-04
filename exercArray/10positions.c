//Faça um programa que contenha um array de 10 posições. O usuário poderá selecionar duas posições
//para fazer algum dos cálculos básicos (soma, subtração, divisão, multiplicação)
#include <stdio.h>

void receiveValues(int arr[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("\nFirst array value in position %d \n", i);
        scanf("%i", &arr[i]);
    }
}

void selectPositions(int *first, int *second)
{
    printf("\nSelect two positions: ");
    scanf("%i %i", first, second); //first e second sao ponteiros que apontam para as variaveis first_position e second_position
    //por isso nao precisa do &
}

int main()
{
    int array[10];
    receiveValues(array);

    printf("\nArray values: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%i |", array[i]);
    }

    int first_position, second_position;
    selectPositions(&first_position, &second_position);

    int option;
    printf("Select the desired operation:\n");
    printf("1. Sum\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    scanf("%i", &option);

    switch (option)
    {
    case 1:
        printf("\nResult: %i\n", array[first_position] + array[second_position]);
        break;
    case 2:
        printf("\nResult: %i\n", array[first_position] - array[second_position]);
        break;
    case 3:
        printf("\nResult: %i\n", array[first_position] * array[second_position]);
        break;
    case 4:
        if (array[second_position] != 0)
        {
            printf("\nResult: %f\n", (float)array[first_position] / array[second_position]);
        }
        else
        {
            printf("\nDivision by zero is not allowed.\n");
        }
        break;
    case 5:
        printf("\nExiting...\n");
        break;
    default:
        printf("\nInvalid Option!\n");
        break;
    }

    return 0;
}