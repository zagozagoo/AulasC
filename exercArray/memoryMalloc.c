//Faça um programa que leia o tamanho de um vetor de inteiros e reserve dinamicamente memoria para esse vetor
//Em seguida, leia os elementos desse vetor, imprima o vetor lido e mostre o 
//resultado da soma dos numeros ımpares presentes no vetor
#include <stdio.h>
#include <stdlib.h>

int receiveValues(int *arr1)
{
    for (int i = 0; i < 6; i++)
    {
        printf("First array value in position %d \n", i);
        scanf("%i", &arr1[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%i |", arr1[i]);
    }
}

int main()
{
    int elements[6];
    int *array = (int *)malloc(elements * sizeof(int));
    
    receiveValues(elements);
}