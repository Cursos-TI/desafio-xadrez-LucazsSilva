#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças

    int movimentacaoTorre = 0;
    int movimentacaoBispo = 0;
    int movimentacaoRainha = 0;

    // Movimento da Torre cinco casas para a direita.
    printf("====== MOVIMENTACAO TORRE ======\n");
    for (int movimentacaoTorre = 0; movimentacaoTorre < 5; movimentacaoTorre++){
        printf("Direita\n");
    }

    // Movimento da Bispo cinco casas para a Cima, Direita.
    printf("====== MOVIMENTACAO BISPO ======\n");
    while (movimentacaoBispo < 5){
        printf("Cima, Direita\n");
        movimentacaoBispo++;

    }

    // Movimento da Rainha cinco casas para a esquerda.
    printf("====== MOVIMENTACAO RAINHA ======\n");
    do {
        movimentacaoRainha++;
        printf("Esquerda\n");
    } while (movimentacaoRainha < 8);


    return 0;
}
