#include <stdio.h>

// Definir o tamanho do tabuleiro
#define TAMANHO_TABULEIRO 10
// Definir o tamanho da área de efeito das habilidades
#define RAIO_HABILIDADE 2 // Define o "raio" para as formas, como 2 para uma matriz 5x5.

int main() {
    
    // 1. Criar e inicializar o tabuleiro 10x10 com zeros.
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0; // Preenche com 0 (água).
        }
    }

    // 2. Posicionar navios para ter algo no tabuleiro.
    // Usamos o valor 3 para representar os navios.
    // Navio Horizontal
    tabuleiro[1][1] = 3;
    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;
    // Navio Vertical
    tabuleiro[5][8] = 3;
    tabuleiro[6][8] = 3;
    tabuleiro[7][8] = 3;

    // --- Aplicando Habilidades Especiais ---
    // Usaremos o valor 5 para representar a área de efeito.

    // Ponto de origem para as habilidades.
    // Vamos centralizar no meio do tabuleiro para evitar problemas de limite.
    int centroHabilidadeLinha = 5;
    int centroHabilidadeColuna = 5;

    // Habilidade 1: Cruz
    // A cruz é a forma mais simples.
    // Pinta a linha e a coluna do centro da habilidade.
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        // Pinta a linha do centro
        tabuleiro[centroHabilidadeLinha][i] = 5;
        // Pinta a coluna do centro
        tabuleiro[i][centroHabilidadeColuna] = 5;
    }
    
    // Habilidade 2: Cone (apontando para baixo)
    // Vamos re-inicializar o tabuleiro para mostrar uma nova habilidade.
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0; 
        }
    }
    // Reposiciona os navios
    tabuleiro[1][1] = 3; tabuleiro[1][2] = 3; tabuleiro[1][3] = 3;
    tabuleiro[5][8] = 3; tabuleiro[6][8] = 3; tabuleiro[7][8] = 3;

    int linhaCone = 1;
    int colunaCone = 5;
    
    // Loop para desenhar o cone.
    for (int i = 0; i < 4; i++) { // Desenha 4 linhas do cone
        for (int j = 0; j <= i; j++) { // Aumenta a largura a cada linha
            // Posição no lado esquerdo do centro
            if (colunaCone - j >= 0) {
                tabuleiro[linhaCone + i][colunaCone - j] = 5;
            }
            // Posição no lado direito do centro
            if (colunaCone + j < TAMANHO_TABULEIRO) {
                tabuleiro[linhaCone + i][colunaCone + j] = 5;
            }
        }
    }
    
    // 3. Exibir o tabuleiro na tela.
    printf("Tabuleiro de Batalha Naval\n\n");
    
    // Loop para exibir as linhas e colunas.
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); // Pula uma linha após cada linha do tabuleiro
    }

    return 0;
}