#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int movimentosTorre = 5;
    int movimentosBispo = 5;
    int movimentosRainha = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("--- Movimento do Bispo --- \n");

    int i = 0;

    while (i < movimentosBispo)
    {
        printf("Direita, Cima\n", i);
        i++;
    }

    printf("\n");
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma  Comentário: Utilizei o forestrutura de repetição para simular a movimentação da Torre para a direita.
    
    printf("--- Movimento da Torre ---\n");

    for (int i = 0; i < movimentosTorre; i++)
    {
        printf("Direita\n", i);
    }

    printf("\n");
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("--- Movimento da Rainha---\n");

    int contadorRainha = 0;

    do {
        printf("Esquerda\n");
        contadorRainha++;
    }
    while (contadorRainha < movimentosRainha);


    return 0;
}