//1- Receba valores em cada posição de uma matrix e identifique a posição e o valor que está o maior deles.
#include <stdio.h>

int main ()
{
    int rows, columns;

    printf("Enter the desired number for the rows:\n");
    scanf("%i", &rows);
    printf("Enter the desired number for the columns:\n");
    scanf("%i", &columns);

    int matrix[rows][columns];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter the value in (%i, %i): ", i, j);
            scanf("%i", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%i ", matrix[i][j]);
        }
        printf("\n");
    }

}

int highest_number = -32768;

for(int k = 0; k < rows; k++)
{
    for(int j = 0; j < columns; j++)
    {
        if (matrix[i][j] > highest_number)
        {
            highest_number = matrix[i][j];
        }
    }
}



