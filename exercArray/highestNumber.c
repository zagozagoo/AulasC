#include <stdio.h>

int main()
{
    int array[5] = {2, 5, 17, 8, 9};
    int *ptr = array;
    int highest = *ptr; //inicialize highest com o primeiro elemento do array
    
    for (int i = 1; i < 5; i++)
    { //comeca a partir do segundo elemento, indice 1
        if (*(ptr + i) > highest)
        {
            highest = *(ptr + i);
        }
    }
    
    printf("\nThe highest value is %i", highest);
    
    return 0;
}
