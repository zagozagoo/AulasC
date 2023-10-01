//Escreva um código onde será identificado os números primos até o valor
//inserido pelo usuário.
#include <stdio.h>

int main()
{
    int value, i, isPrime = 1;
    printf("\nEnter the desired number: ");
    scanf("%i", &value);

    if(value <= 1)
    {
        printf("\nOnly numbers above 1 can be prime!");
    }
    else
    {
        for(i = 2; i < value; i++)
        {
            if (value % i == 0)
            {
                isPrime = 0; //if it is divisible by some number, it is not prime
                break;
            }
        }
    }
    
    if(isPrime)
    {
        printf("%i is a prime number!", value);
    }
    else
    {
        printf("%i is not a prime number!", value);
    }
    return 0;
}