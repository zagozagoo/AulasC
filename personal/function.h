//uma biblioteca (arquivos header que podem ser importados em outros codigos)
//que contem algumas funcoes matematicas de utilidade, como min(), max(), abs(), fatorial(), pow(), etc.
#ifndef MATHFUNCTIONS_H
#define MATHFUNCTIONS_H
#include <stdio.h>

template<typename T>
T absolute(T number)
{ 
    return (number < 0) ? -number : number;
}

template<typename T>
T minimum(T first_number, T second_number) 
{
    return (first_number > second_number) ? second_number : first_number;
}

template<typename T>
T maximum(T first_number, T second_number)
{
    return (first_number > second_number) ? first_number : second_number;
}

#endif
