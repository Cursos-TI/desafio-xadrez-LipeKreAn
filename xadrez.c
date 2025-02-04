#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int MovimentoBispo = 5;
    int MovimentoTorre = 5;
    int MovimentoRainha = 8;

    // Implementação de Movimentação do Bispo
    // Usando a estrutura for
    printf("\n=== BISPO ===\n");
    for (int i = 0; i < MovimentoBispo; i++) {
        printf("Cima, Direita\n");
    }

    // Implementação de Movimentação da Torre
    // Usando a estrutura while
    printf("\n=== TORRE ===\n");
    while (MovimentoTorre > 0) {
        printf("Direita\n");
        MovimentoTorre--;
    }

    // Implementação de Movimentação da Rainha
    // Usando a estrutura do while
    printf("\n=== RAINHA ===\n");
    do {
        printf("Esquerda\n");
        MovimentoRainha--;
    } while (MovimentoRainha > 0);

    return 0;
}
