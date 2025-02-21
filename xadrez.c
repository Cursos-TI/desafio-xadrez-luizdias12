#include <stdio.h>
#include <string.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverTorre(int casas)
{
    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverRainha(int casas)
{
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

void moverBispo(int casas)
{
    int movimentoCompleto = casas;
    if (casas > 0)
    {
        while (movimentoCompleto--)
        {
            for (int i = 0; i < casas; i++)
            {
                printf("Direita\n");
            }
            printf("Cima\n");
        }
        moverBispo(casas - 1);
    }
}

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int max_bispo = 5;
    int max_torre = 5;
    int max_rainha = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // int i_bispo = 1;

    // while(i_bispo <= max_bispo)
    // {
    //     printf("Bispo - Diagonal Superior Direita\n");
    //     i_bispo++;
    // }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // int i_torre = 1;

    // do {
    //     printf("Torre - Direita\n");
    //     i_torre++;
    // } while(i_torre <= max_torre);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // for(int i_rainha = 1; i_rainha <= max_rainha; i_rainha++)
    // {
    //     printf("Rainha - Esquerda\n");
    // }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // int movimentoCompleto = 1;

    // while(movimentoCompleto--)
    // {
    //     for (int i_cavalo = 0; i_cavalo < 2; i_cavalo++)
    //     {
    //         printf("Cavalo - Baixo\n"); // dois movimentos para baixo
    //     }
    //     printf("Cavalo - Esquerda\n"); // um movimento para esquerda
    // }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    moverBispo(max_bispo);
    moverTorre(max_torre);
    moverRainha(max_rainha);

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
