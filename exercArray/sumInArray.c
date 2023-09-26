#include <stdio.h>

// Faça a soma de todos os valores de um array.

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += array[i];
    }
    printf("The sum of the values in the array is: %i", sum);
    return 0;
}