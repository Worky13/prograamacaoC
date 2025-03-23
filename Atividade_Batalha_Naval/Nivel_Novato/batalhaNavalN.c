#include <stdio.h>

int main() {
    // Tamanho do tabuleiro e dos navios
    int tamanhoTabuleiro = 10;
    int tamanhoNavio = 3;

    // Declaração do tabuleiro
    int tabuleiro[tamanhoTabuleiro][tamanhoTabuleiro];

    // Inicialização do tabuleiro com 0 (água)
    for (int i = 0; i < tamanhoTabuleiro; i++) {
        for (int j = 0; j < tamanhoTabuleiro; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Coordenadas iniciais dos navios
    int linhaNavio1 = 2, colunaNavio1 = 2; // Navio 1 (horizontal)
    int linhaNavio2 = 5, colunaNavio2 = 5; // Navio 2 (vertical)

    // Variável de controle para verificar erros
    int erro = 0;

    // Validação das coordenadas dos navios
    // Verifica se o navio 1 cabe horizontalmente
    if (colunaNavio1 + tamanhoNavio > tamanhoTabuleiro) {
        printf("Erro: Navio 1 não cabe no tabuleiro na posição especificada.\n");
        erro = 1;
    }

    // Verifica se o navio 2 cabe verticalmente
    if (linhaNavio2 + tamanhoNavio > tamanhoTabuleiro) {
        printf("Erro: Navio 2 não cabe no tabuleiro na posição especificada.\n");
        erro = 1;
    }

    // Verifica se os navios se sobrepõem
    for (int i = 0; i < tamanhoNavio; i++) {
        if (tabuleiro[linhaNavio1][colunaNavio1 + i] != 0 || 
            tabuleiro[linhaNavio2 + i][colunaNavio2] != 0) {
            printf("Erro: Navios se sobrepõem.\n");
            erro = 1;
            break;
        }
    }

    // Se não houver erros, posiciona os navios
    if (!erro) {
        // Posiciona o primeiro navio horizontalmente
        for (int i = 0; i < tamanhoNavio; i++) {
            tabuleiro[linhaNavio1][colunaNavio1 + i] = 3; // 3 representa uma parte do navio
        }

        // Posiciona o segundo navio verticalmente
        for (int i = 0; i < tamanhoNavio; i++) {
            tabuleiro[linhaNavio2 + i][colunaNavio2] = 3; // 3 representa uma parte do navio
        }

        // Exibe o tabuleiro
        printf("Tabuleiro:\n");
        for (int i = 0; i < tamanhoTabuleiro; i++) {
            for (int j = 0; j < tamanhoTabuleiro; j++) {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}