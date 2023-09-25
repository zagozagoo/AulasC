//Faça um programa que exiba uma barra de carregamento para processar uma compra de um determinado produto. 
#include <stdio.h>
#include <Windows.h>


int main (void)
{
    int escolha;
    int i=0;
    printf("Digite 1 para comprar\n");
    scanf("%d", &escolha);
    if (escolha==1)
    {
        printf("Processando pagamento");
        while (i++ < 10) {
            Sleep(500); // Sleep 0,5 segundo
            printf(".");
        }
        printf("\nPagemento efetuado! ");
    }
}