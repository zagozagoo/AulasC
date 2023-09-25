//Faça um programa que exiba a tabuada de um valor inserido pelo user
int tabuada(int n, int i)
{
    if (i < 11)
    {
        return n * i;
    }
    else
    {
        int result = n * tabuada(n, i + 1);
        return result;
    }
}

int main()
{
    int numero;
    printf("De um valor: ");
    scanf("%d", &numero);
    for(int i = 0; i <= 10; i++)
    {
        printf("A tabuada de %i eh: %i\n", numero, tabuada(numero,i));
    }
}