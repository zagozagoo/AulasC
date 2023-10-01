//Escreva um código onde será identificado os números primos até o valor
//inserido pelo usuário.
#include <stdio.h>

int getNumberFromUser()
{
    int value;
    printf("\nEnter the desired number: ");
    scanf("%i", &value);
    return value;
}

int main()
{
    int value, i, isPrime = 1;
    value = getNumberFromUser();

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
        printf("\n%i is a prime number!", value);
    }
    else
    {
        printf("\n%i is not a prime number!", value);
    }
    return 0;
}