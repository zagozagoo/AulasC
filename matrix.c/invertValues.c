//Leia uma matriz de 3 x 3 elementos. Faça a inversão dos valores armazenados nessa matriz
int main()
{
    int matrix[3][3];
    int invertedMatrix[3][3];

    //fazendo matriz original
    printf("\nEnter the value for the 3x3 matrix:\n");
    for(int i = 0; i < 3;  i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%i", &matrix[i][j]);
        }
    }
    //invertendo os valores     
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            invertedMatrix[i][j] = matrix[2 - i][2 - j];
        }
    }

    printf("\nOriginal matrix:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("| %i |", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nInverted matrix:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("| %i |", invertedMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}