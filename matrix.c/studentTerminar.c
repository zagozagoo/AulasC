// Leia uma matriz 5 x 10 que se refere respostas de 10 questões de múltipla escolha, referentes a 5 alunos
//Leia também um vetor de 10 posições contendo o gabarito de respostas que podem ser a, b, c ou d
//Seu programa deverá comparar as respostas de cada candidato com o gabarito
//e emitir um vetor denominado resultado, contendo a pontuação correspondente a cada aluno.

#include <stdio.h>

int main()
{
    char gabarito[10]; 
    char respostas[5][10]; 
    int pontuacao[5]; // vetor que armazena a pontuação

    printf("Digite o gabarito (10 respostas a, b, c ou d): ");
    for (int i = 0; i < 10; i++)
    {
        scanf(" %c", &gabarito[i]);
    }

    for (int aluno = 0; aluno < 5; aluno++)
    {
        printf("Respostas do aluno %d (10 respostas a, b, c ou d): ", aluno + 1);
        for (int questao = 0; questao < 10; questao++)
    {
            scanf(" %c", &respostas[aluno][questao]);
            if (respostas[aluno][questao] == gabarito[questao])
            {
                pontuacao[aluno]++;
            }
        }
    }

    printf("Pontuações dos alunos:\n");
    for (int aluno = 0; aluno < 5; aluno++)
    {
        printf("Aluno %d: %d pontos\n", aluno + 1, pontuacao[aluno]);
    }

    return 0;
}
