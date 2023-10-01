//Contar quantos dígitos tem um número inteiro positivo.
#include <stdio.h>
#include <string.h>

int getNumberFromUser()
{
    int value;
    printf("\nEnter the desired number: ");
    scanf("%i", &value);
    return value;
}

int main()
{
    int value, count = 0;
    value = getNumberFromUser();

    if (value < 0)
    {
        printf("\nEnter a positive number!");
    }
    else if (value == 0)
    {
        count = 1;
    }
    else
    {
        for (int temp = value; temp > 0; temp /= 10) //temp is the temporary value because value is going to change in the loop
        {
            count ++;
        }
    }
    printf("\n%i has %i digits.", value, count);
    return 0;
}