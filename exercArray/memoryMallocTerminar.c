//Faça um programa que leia o tamanho de um vetor de inteiros e reserve dinamicamente memoria para esse vetor
//Em seguida, leia os elementos desse vetor, imprima o vetor lido e mostre o 
//resultado da soma dos numeros ımpares presentes no vetor
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    int *array;
    int sumOddNumbers = 0;

    printf("\nEnter the size of the array: ");
    scanf("%i", &size);

    array = (int *)malloc(size * sizeof(int));
    if (array == NULL)
    {
        printf("\nError in memory allocation");
        return 1;
    }
    printf("\nEnter the array elements:\n");
    for(int i = 0; i < size; i++)
    {
    scanf("%i", &array[i]);
    }

    printf("\nArray: ");
    for (int i = 0; i < size; i++)
    {
        printf("%i | ", array[i]);
        if (array[i] % 2 != 0)
        {
            sumOddNumbers += array[i];
        }
    }
    printf("\nThe sum for the odd numbers is: %i\n", sumOddNumbers);
    free(array);
}