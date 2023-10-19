#ifndef ARRFUNCTIONS_H
#define ARRFUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Crie uma header com funções que receberão um vetor dinâmico e permitirão manipulá-lo. Instruções:

//Adicionar elemento ao array;
//Remover elemento do array;
//Aumentar a capacidade de memória do array;
//Diminuir a capacidade de memória do array;

//Crie uma main() para fazer os testes;

//Quando a quantidade de elementos chegar ao limite da capacidade, deverá ser realocado o DOBRO de memória atual ocupada

typedef struct
{
    int *array = NULL;
    int size = 0;
    int capacity = 0;
} DynamicVector;

DynamicVector* createVector(int initialCapacity);

void addElements(DynamicVector *vector, int element);
void removElements(DynamicVector *vector, int index);
void increaseCapacity(DynamicVector *vector);
void decreaseCapacity(DynamicVector *vector);
void destroyVector(DynamicVector *vector);

int receiveValues(int *arr1, int *arr2)
{
    for (int i = 0; i < 4; i++)
    {
        printf("First array value in position %d \n", i);
        scanf("%i", &arr1[i]);
        printf("Second array value in position %d \n", i);
        scanf("%i", &arr2[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%i |", arr1[i]);
        printf("%i |", arr2[i]);
    }
}

int sumValues(int *array)
{
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += array[i];
    }
    return sum;
}

int subValues(int *arr1, int *arr2)
{
    int sum1 = sumValues(arr1);
    int sum2 = sumValues(arr2);
    
    int sub = 0;

    if (sum1 < sum2)
    {
        sub = sum2 - sum1;
        printf("\nThe absolute difference between the sums is: %i", sub);
    }
    else if (sum1 > sum2)
    {
        sub = sum1 - sum2;
        printf("\nThe absolute difference between the sums is: %i", sub);
    }
    else
    {
        sub = 0;
        printf("\nThe absolute difference between the sums is: %i", sub);
    }
    return sub;
}
#endif