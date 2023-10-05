//Faça um programa que faça um padrão de asteriscos, como um triângulo ou
//um retângulo até um valor máximo de 20. Se passar disso deve bloquear a
//execução.

#include <stdio.h>

int main()
{
    printf("\nTriangle");
    for(int i = 0; i < 20; i ++)
    {
        for(int j = 0; j < i; j ++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\nretengulo\n\n"); //nicolas nao sabe escrever
    for(int i = 0; i < 10; i ++)
    {
        for(int j = 0; j < 20; j ++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    
    int altura;

    printf("Digite a altura do triângulo equilátero: ");
    scanf("%d", &altura);

    for (int linha = 1; linha <= altura; linha++)
    {
        //espaços em branco na esquerda p centralizar o triangulo
        for (int espaco = 1; espaco <= altura - linha; espaco++)
        {
            printf(" ");
        }

        //asteriscos formando o triangulo
        for (int asterisco = 1; asterisco <= 2 * linha - 1; asterisco++)
        {
            printf("*");
        }

        //ir para proxima linha
        printf("\n");
    }

    return 0;
}
