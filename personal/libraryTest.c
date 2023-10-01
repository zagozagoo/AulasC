#include "function.h"

int main()
{
    int number = 45;
    int absoluteValue = absolute(number);
    printf("The abs is %i", absoluteValue); 
    return 0;
}

// int main(int first_number, int second_number, int minim)
// {
//     printf("\nEnter two desired numbers: ");
//     scanf("%i%i", &first_number, &second_number);

//     minim = minimum(first_number, second_number);

//     printf("\nThe minimum value is: %i", minim);
// }

// int main(int first_number, int second_number, int maxi)
// {
//     printf("\nEnter two desired numbers: ");
//     scanf("%i%i", &first_number, &second_number);

//     maxi = maximum(first_number, second_number);

//     printf("\nThe maximum value is: %i", maxi);
// }