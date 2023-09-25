//Escreva um programa que declare um inteiro, um real e um char, e
//ponteiros para inteiro, real e char. Associe as variáveis aos ponteiros
//(use &). Modifique os valores de cada variável usando os ponteiros.
//Imprima os valores das variáveis antes e após a modificação.

#include <stdio.h>
#include <string.h>

void trocarValor(int *int_novo, float *float_novo, char *char_novo)
{
    *int_novo = 30;
    *float_novo = 200.00;
    *char_novo = 'v';
}

int main()
{
    int inteiro = 20;
    float floatt = 2.6;
    char charr = 'd';

    printf("\nValor inicial de inteiro %i\n", inteiro);
    printf("\nValor inicial de float %f\n", floatt);
    printf("\nValor inicial de char %c\n", charr);

    trocarValor(&inteiro, &floatt, &charr);

    printf("\nNovo valor de inteiro %i\n", inteiro);
    printf("\nNovo valor de float %f\n", floatt);
    printf("\nNovo valor de char %c\n", charr);
    return 0;
}