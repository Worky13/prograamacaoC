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
    int linhaNavio1 = 8, colunaNavio1 = 1; // Navio 1 (horizontal)
    int linhaNavio2 = 5, colunaNavio2 = 5; // Navio 2 (vertical)
    int linhaNavio3 = 1, colunaNavio3 = 1; // Navio 3 (diagonal)
    int linhaNavio4 = 0, colunaNavio4 = 7; // Navio 4 (diagonal)

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

    // Verifica se o navio 3 cabe na diagonal principal
    if (linhaNavio3 + tamanhoNavio > tamanhoTabuleiro || colunaNavio3 + tamanhoNavio > tamanhoTabuleiro) {
        printf("Erro: Navio 3 não cabe no tabuleiro na posição especificada.\n");
        erro = 1;
    }

    // Verifica se o navio 4 cabe na diagonal secundária
    if (linhaNavio4 + tamanhoNavio > tamanhoTabuleiro || colunaNavio4 - tamanhoNavio < -1) {
        printf("Erro: Navio 4 não cabe no tabuleiro na posição especificada.\n");
        erro = 1;
    }

    // Verifica se os navios se sobrepõem
    // Verifica sobreposição entre navio 1 e 2
    for (int i = 0; i < tamanhoNavio; i++) {
        if (tabuleiro[linhaNavio1][colunaNavio1 + i] != 0 || 
            tabuleiro[linhaNavio2 + i][colunaNavio2] != 0) {
            printf("Erro: Navios 1 e 2 se sobrepõem.\n");
            erro = 1;
            break;
        }
    }

    // Verifica sobreposição com navio 3 (diagonal principal)
    for (int i = 0; i < tamanhoNavio; i++) {
        if (tabuleiro[linhaNavio3 + i][colunaNavio3 + i] != 0) {
            printf("Erro: Navio 3 sobrepõe outro navio.\n");
            erro = 1;
            break;
        }
    }

    // Verifica sobreposição com navio 4 (diagonal secundária)
    for (int i = 0; i < tamanhoNavio; i++) {
        if (tabuleiro[linhaNavio4 + i][colunaNavio4 - i] != 0) {
            printf("Erro: Navio 4 sobrepõe outro navio.\n");
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

        // Posiciona o terceiro navio na diagonal principal
        for (int i = 0; i < tamanhoNavio; i++) {
            tabuleiro[linhaNavio3 + i][colunaNavio3 + i] = 3;
        }

        // Posiciona o quarto navio na diagonal secundária
        for (int i = 0; i < tamanhoNavio; i++) {
            tabuleiro[linhaNavio4 + i][colunaNavio4 - i] = 3;
        }

        // Exibe o tabuleiro
        printf("Tabuleiro:\n");
        for (int i = 0; i < tamanhoTabuleiro; i++) {
            for (int j = 0; j < tamanhoTabuleiro; j++) {
                printf("%2d ", tabuleiro[i][j]); // %2d para alinhar os números
            }
            printf("\n");
        }
    }

    return 0;
}