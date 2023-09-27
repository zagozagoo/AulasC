#include <stdio.h>
//Crie uma função que receba um ponteiro de um array e exiba todas os
//valores armazenados nas posições.

int main()
{
    int array [6] = {18, 2, 10, 6, 5, 14};
    int *ptr = array;

    for (int i = 0; i < 6; i++)
    {
        printf("%i | ", *ptr++);
    }
}
