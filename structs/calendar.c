//1. Escreva um trecho de codigo para fazer a criação dos novos tipos de dados conforme solicitado abaixo:
//• Horário: composto de hora, minutos e segundos. • Data: composto de dia, mês e ano.
//• Compromisso: composto de uma data, horario e texto que descreve o compromisso.

#include <stdio.h>
#include <string.h>

typedef struct
{
    int hora;
    int minuto;
    int segundo;
} Horario;

typedef struct 
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct 
{
    Data data1;
    Horario horario1;
    char descricao[60];
} Compromisso;

int main()
{
    Compromisso compromisso;

    printf("\nInsira respectivamente: DIA, MES, ANO, HORA e MINUTO para o compromisso:\n");
    scanf("%i %i %i %i %i", &compromisso.data1.dia, &compromisso.data1.mes, &compromisso.data1.ano, &compromisso.horario1.hora, &compromisso.horario1.minuto);
    printf("Digite a descricao do compromisso:\n");
    scanf(" %s", &compromisso.descricao);
    system("cls");

    printf("\n_____Seu evento foi adicionado!_____\n");
    printf("\n%i / %i / %i \n%i : %i\n", compromisso.data1.dia, compromisso.data1.mes, compromisso.data1.ano, compromisso.horario1.hora, compromisso.horario1.minuto);
    printf("\n%s\n", compromisso.descricao);

    return 0;
}
    
    
    