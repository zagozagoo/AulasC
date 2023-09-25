//Faça um programa para adivinhar um número entre 1 e 1000
//este valor pode ser definido automaticamente, ou randomizado utilizando uma função rand.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

//op é escolha do usuario e num o numero aleatorio
int main(void)
{
    int op, num;
    srand(time(NULL));
    while (1){
        num= rand() % 1000;
        while(op != num){
            printf("Adivinhe o numero: ");
            scanf("%d", &op);
    
        if (op < num){
            printf("tente um numero maior! ");
        }
        else if (op > num){
            printf("tente um numero menor! ");
        }
        else if (op==num){
            printf("Correto!");
            break;
        }
    }
        
    }
}