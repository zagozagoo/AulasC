//Faça um programa que converta um número decimal para um número
//binário utilizando recursividade

#include<stdio.h>
int BinaryToDecimal(int n)
{
    if(n==0)
        return 0;
    else
        return (n% 10 + 2* BinaryToDecimal(n / 10));
}
int main()
{
    int n;
    printf("Enter the Binary Value:");
    scanf("%d",&n);
    printf("Decimal Value of Binary number is: %d",BinaryToDecimal(n));
}


//OR//


#include <stdio.h>

int binario(int num){

    int bit = num % 2;

    if (num == 0){
        return 0;
    }
    return bit + binario(num/2)*10;
}

int main(){

    int num;

    printf("Informe o numero: ");
    scanf("%i", &num);

    printf("%d\n", binario(num));

    return 0;

}