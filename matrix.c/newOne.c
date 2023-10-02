//Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posiçao das matrizes lidas
#include <stdio.h>

int i;
int j;

int changeValues(int valor1, int valor2)
{
    return (valor1 > valor2) ? valor1 : valor2;
}

int main()
{
    int matrix1[4][4], matrix2[4][4], matrixMaior[4][4];

    printf("\nEnter the values for the first matrix: ");

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("\nEnter the value in (%i, %i): ", i, j);
            scanf("%i", &matrix1[i][j]);
        }
    }

    printf("\nEnter the values for the second matrix: ");

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("\nEnter the value in (%i, %i): ", i, j);
            scanf("%i", &matrix2[i][j]);
        }
    }

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            matrixMaior[i][j] = changeValues(matrix1[i][j],matrix2[i][j]);
        }
    }
    
    printf("\nThe matrix with higher values is: ");
    for(i = 0; i < 4; i++)
    {
        printf("\n");
        for(j = 0; j < 4; j++)
        {
            printf("%i \t", matrixMaior[i][j]);
        }
    }
    return 0;
}
