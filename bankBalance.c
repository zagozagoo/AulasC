//desenvolva um programa que faça a verificação de valores bancários e permita o saque ou o depósito
//O saque só pode ser feito se o valor total da conta for maior que 60 reais.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
int main (void)
{
    int saldo=1000, escolha, valor;
    while (1){
        printf("\nDigite: 1-Saque, 2-Deposito, 3-Sair\n");
        scanf("%d", &escolha);
        if (escolha ==1)
        {
            if(saldo<=59)
            {
                printf("\nSaldo insuficiente!");
            }
            else
            {
                printf("\nQuanto voce deseja sacar? ");
                scanf("%d", &valor);
                saldo-=valor; //saldo= saldo-valor
                printf("\nSeu saldo atual e: %d", saldo);
            }
        }
        else if (escolha==2)
        {
            printf("\nQuanto voce deseja depositar? ");
            scanf("%d", &valor);
            saldo+=valor;
            printf("\nSeu saldo atual e: %d", saldo);
        }
        else if (escolha==3)
        {
            printf("\nSaindo...");
            break;
        }
    }
}