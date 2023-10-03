//Faça um programa que contenha um array de 10 posições. O usuário poderá selecionar duas posições
//para fazer algum dos cálculos básicos (soma, subtração, divisão, multiplicação)
#include <stdio.h>

int i;
int j;
int first_position[i];
int second_position[j];

void receiveValues(int arr1)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("\nFirst array value in position %d \n", i);
            scanf("%i", &arr1[i]);
            printf("\nFirst array value in position %d \n", i);
            scanf("%i", &arr1[i]);
        }
    }
}

int selectPositions()
{
    printf("\nSelect two positions: ");
    scanf("%i %i", &first_position, &second_position);
}

void options()
{
    int option;

    while(1)
    {
        printf("\nSelect the desired operation: \n");
        printf("\n1. Sum");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Exit\n");
        scanf("%i", &option);

        switch(option)
        {
        case 1:
            first_position + second_position;
            break;
        case 2:
            first_position - second_position;
            break;
        case 3:
            first_position * second_position;
            break;
        case 4:
            first_position / second_position;
            break;
        case 5:
            printf("\nClosing...");
            return 0;
        default:
            printf("\nInvalid Option!");
            break;
        }
    }
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
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            array[i][j] = selectValues(first_position[i][j],second_position[i][j]);
        }
    }

    return 0;
}