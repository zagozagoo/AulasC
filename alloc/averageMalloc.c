//Permita ao usuário inserir uma lista de números inteiros e, em seguida,
//calcule a média desses números.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amount;
    int *numbers;
    double average = 0.0;

    printf("\nEnter the desired amount of numbers:\n");
    scanf("%i", &amount);

    numbers = (int *)malloc(amount * sizeof(int));

    if (numbers == NULL)
    {
        printf("\nError allocating memory.");
        return 1;
    }

    for (int i = 0; i < amount; i++)
    {
        printf("Enter the number %i:\n", i + 1);
        scanf("%i", &numbers[i]);
        average += numbers[i];
    }

    if (amount > 0)
    {
        average /= amount;
        printf("\nThe average of the numbers is: %.2lf\n", average);
    }
    else
    {
        printf("\nIt's not possible to calculate the average of the numbers.\n");
    }
    
    free(numbers);

    return 0;
}