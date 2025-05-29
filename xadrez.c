#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void funcaoTorre() {

    // Movimento da Torre cinco casas para a direita.
    int movimentacaoTorre = 0;
    printf("====== MOVIMENTACAO TORRE ======\n");
    for (int movimentacaoTorre = 0; movimentacaoTorre < 5; movimentacaoTorre++){
        printf("Direita\n");
    }

}


void funcaoBispo(){
    // Movimento da Bispo cinco casas para a Cima, Direita.

    int movimentacaoBispo = 0;
    
    printf("====== MOVIMENTACAO BISPO ======\n");
    for (movimentacaoBispo = 0; movimentacaoBispo < 5; movimentacaoBispo++){
        for (int j = 0; j < 5; j++){
            if (movimentacaoBispo == j){
                printf("Cima, direita\n");
            }
        }
        
    }

}

void funcaoRainha(){
    // Movimento da Rainha cinco casas para a esquerda.
    int movimentacaoRainha = 0;
    
    printf("====== MOVIMENTACAO RAINHA ======\n");
    do {
        movimentacaoRainha++;
        printf("Esquerda\n");
    } while (movimentacaoRainha < 8);

}

int main() {

   funcaoTorre();
   funcaoBispo();
   funcaoRainha();

    int movimentacaoCavalo = 1;

    // Movimento do cavelo.
    printf("====== MOVIMENTACAO CAVALO ======\n");
        
    
    while (movimentacaoCavalo--){
        for (int j = 1; j <= 2; j++){
            printf("Cima\n");
        }
        printf("Direita\n");
    }

    return 0;
}
