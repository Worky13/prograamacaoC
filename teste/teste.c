#include <stdio.h>

int main() {
    // Tamanho do tabuleiro e dos navios
    int tamanhoTabuleiro = 10;
    int tamanhoNavio = 3;

    // Declaração do tabuleiro (inicializado com 0, que representa água)
    int tabuleiro[tamanhoTabuleiro][tamanhoTabuleiro] = {0};

    // Posiciona o primeiro navio horizontalmente (linha 2, coluna 2)
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[2][2 + i] = 3; // 3 representa uma parte do navio
    }

    // Posiciona o segundo navio verticalmente (linha 5, coluna 5)
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[5 + i][5] = 3; // 3 representa uma parte do navio
    }

    // Exibe o tabuleiro
    printf("Tabuleiro:\n");
    for (int i = 0; i < tamanhoTabuleiro; i++) {
        for (int j = 0; j < tamanhoTabuleiro; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}