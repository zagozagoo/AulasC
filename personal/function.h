//uma biblioteca (arquivos header que podem ser importados em outros codigos)
//que contem algumas funcoes matematicas de utilidade, como min(), max(), abs(), fatorial(), pow(), etc.
#ifndef MATHFUNCTIONS_H
#define MATHFUNCTIONS_H
#include <stdio.h>

int absolute(int number)
{ 
    return (number < 0) ? -number : number;
}

int minimum(int first_number, int second_number) 
{
    return (first_number > second_number) ? second_number : first_number;
}

int maximum(int first_number, int second_number)
{
    return (first_number > second_number) ? first_number : second_number;
}

#endif
