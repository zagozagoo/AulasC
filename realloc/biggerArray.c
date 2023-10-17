//Crie um programa que peça ao usuário para inserir elementos em um array dinamicamente redimensionado usando realloc.
//O array deve crescer à medida que o usuário insere mais elementos.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array = NULL;
    int size = 0;
    int capacity = 0;
    int op = 0;

    printf("\nInsira quantos elementos deseja inserir:\n");
    int numElements;
    scanf("%i", &numElements);

    capacity = numElements;
    array = (int *)malloc(numElements * sizeof(int));

    if (array == NULL)
    {
        printf("\nErro ao alocar memória.\n");
        return 1;
    }

    printf("Digite os numeros dos elementos:\n");
    for (int i = 0; i < numElements; i++)
    {
       scanf("%i", &array[i]); 
       size++;
    }

    while(1)
    {
        printf("\nDeseja inserir mais um valor? Digite 1 para SIM e 2 para NAO.\n");
        scanf("%i", &op);
        if(op == 1)
        {
            size++;

            if (size == capacity)
            {
                capacity *= 2;
                array = realloc(array, capacity * sizeof(int));

                if (array == NULL)
                {
                    printf("\nErro ao realocar memoria.");
                    return 1; 
                }
            }

            printf("\nDigite o novo valor:\n");
            scanf("%i", &array[size - 1]);
        }
        else if(op == 2)
        {
            break;
        }
        else
        {
            printf("VALOR INVALIDO");
        }
    }
    
    printf("Array atualizado:\n");
    for (int i = 0; i < size; i++)
    {
        printf(" | %i", array[i]);
    }
    printf(" |");

    free(array);
    return 0;
}