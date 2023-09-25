#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void horario()
{
    time_t tempo_atual;
    struct tm* ptr;

    tempo_atual = time(NULL);
    ptr = localtime(&tempo_atual);
    printf("%s", asctime(ptr));
}

void cronometro()
{
    int hora=0, minuto=0, segundo=0;
    while (1)
    {
        sleep(1);
        segundo++;
        if(segundo == 60)
        {
            segundo -= 60;
            minuto++;
        }
        if(minuto == 60)
        {
            minuto -= 60;
            hora++;
        }

        system("cls");
        printf("%2i:%2i:%2i", hora, minuto, segundo);//2 significa que tera dois digitos ex: 06:30:05
    }
}

void temporizador()
{
    int hora, minuto, segundo;
    printf("\nDigite a hora: ");
    scanf("%i", &hora);
    printf("\nDigite o minuto: ");
    scanf("%i", &minuto);
    printf("\nDigite os segundos: ");
    scanf("%i", &segundo);

    while (1)
    {
        sleep(1);
        segundo--;
        if(segundo < 0)
        {
            segundo += 60;
            minuto--;
        }
        if(minuto < 0)
        {
            minuto += 60;
            hora--;
        }

        if (hora == 0 && minuto == 0 && segundo == 0)
        {
            break;
        }

        system("cls");
        printf("%2i:%2i:%2i", hora, minuto, segundo);//2 significa que tera dois digitos ex: 06:30:05
    }
}

int main()
{
    int opcao;
    clock_t inicio, fim;
    double tempopassado;
    time_t tempoatual, tempofinal;

    while(1)
    {
        // system("cls");
        printf("\nSelecione a opcao desejada: \n");
        printf("\n1. Ver horario atual");
        printf("\n2. Iniciar cronometro");
        printf("\n3. Definir temporizador");
        printf("\n4. Sair\n");
        scanf("%i", &opcao);

        switch(opcao)
        {
        case 1:
            horario();
            break;
        case 2:
            cronometro();
            break;
        case 3:
            temporizador();
            break;
        case 4:
            printf("\nSaindo...");
            return 0;
        default:
            printf("\nOpcao invalida!");
            break;
        }
    }
}