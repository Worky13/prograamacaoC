#include <stdio.h>

// Constantes para o tamanho do tabuleiro e navios
#define TAM_TABULEIRO 10
#define TAM_NAVIO 3
#define TAM_HABILIDADE 5  // Tamanho das matrizes de habilidade (ímpar para ter centro)

// Valores para representação no tabuleiro
#define AGUA 0
#define NAVIO 3
#define HABILIDADE 5

int main() {
    // Declaração do tabuleiro
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO];

    // Inicialização do tabuleiro com água (0)
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    // Coordenadas iniciais dos navios
    int linhaNavio1 = 8, colunaNavio1 = 1; // Navio 1 (horizontal)
    int linhaNavio2 = 5, colunaNavio2 = 5; // Navio 2 (vertical)
    int linhaNavio3 = 1, colunaNavio3 = 1; // Navio 3 (diagonal principal)
    int linhaNavio4 = 0, colunaNavio4 = 7; // Navio 4 (diagonal secundária)

    // Posiciona os navios no tabuleiro
    // Navio 1 horizontal
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaNavio1][colunaNavio1 + i] = NAVIO;
    }
    
    // Navio 2 vertical
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaNavio2 + i][colunaNavio2] = NAVIO;
    }
    
    // Navio 3 diagonal principal
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaNavio3 + i][colunaNavio3 + i] = NAVIO;
    }
    
    // Navio 4 diagonal secundária
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaNavio4 + i][colunaNavio4 - i] = NAVIO;
    }

    // Matrizes para as habilidades especiais
    int cone[TAM_HABILIDADE][TAM_HABILIDADE] = {0};
    int cruz[TAM_HABILIDADE][TAM_HABILIDADE] = {0};
    int octaedro[TAM_HABILIDADE][TAM_HABILIDADE] = {0};
    
    // Preenchimento CORRIGIDO da matriz Cone (formato triangular apontando para baixo)
    // Padrão especificado:
    // 0 0 3 0 0
    // 0 3 3 3 0
    // 3 3 3 3 3
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        int largura = 2*i + 1;
        if (i == 0) largura = 1;
        else if (i == 1) largura = 3;
        else if (i == 2) largura = 5;
        
        int inicio = (TAM_HABILIDADE - largura) / 2;
        for (int j = inicio; j < inicio + largura; j++) {
            cone[i][j] = 1;
        }
    }
    
    // Preenchimento da matriz Cruz (cruz centrada)
    int centro = TAM_HABILIDADE / 2;
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        cruz[centro][i] = 1;  // Linha horizontal
        cruz[i][centro] = 1;  // Coluna vertical
    }
    
    // Preenchimento da matriz Octaedro (formato de losango)
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            // Verifica se está dentro do losango
            if (abs(i - centro) + abs(j - centro) <= centro) {
                octaedro[i][j] = 1;
            }
        }
    }

    // Pontos de origem para as habilidades no tabuleiro
    int linhaCone = 2, colunaCone = 2;
    int linhaCruz = 5, colunaCruz = 5;
    int linhaOctaedro = 7, colunaOctaedro = 7;

    // Aplicar habilidade Cone ao tabuleiro
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            if (cone[i][j] == 1) {
                int linha = linhaCone + i - centro;
                int coluna = colunaCone + j - centro;
                
                // Verifica se está dentro do tabuleiro
                if (linha >= 0 && linha < TAM_TABULEIRO && coluna >= 0 && coluna < TAM_TABULEIRO) {
                    tabuleiro[linha][coluna] = HABILIDADE;
                }
            }
        }
    }
    
    // Aplicar habilidade Cruz ao tabuleiro
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            if (cruz[i][j] == 1) {
                int linha = linhaCruz + i - centro;
                int coluna = colunaCruz + j - centro;
                
                if (linha >= 0 && linha < TAM_TABULEIRO && coluna >= 0 && coluna < TAM_TABULEIRO) {
                    tabuleiro[linha][coluna] = HABILIDADE;
                }
            }
        }
    }
    
    // Aplicar habilidade Octaedro ao tabuleiro
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            if (octaedro[i][j] == 1) {
                int linha = linhaOctaedro + i - centro;
                int coluna = colunaOctaedro + j - centro;
                
                if (linha >= 0 && linha < TAM_TABULEIRO && coluna >= 0 && coluna < TAM_TABULEIRO) {
                    tabuleiro[linha][coluna] = HABILIDADE;
                }
            }
        }
    }

    // Exibir o tabuleiro com as habilidades aplicadas
    printf("Tabuleiro com habilidades aplicadas:\n");
    printf("Legenda: 0 = Água, 3 = Navio, 5 = Área de habilidade\n\n");
    
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    // Exibir as matrizes de habilidade para referência
    printf("\nMatriz Cone (corrigida):\n");
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatriz Cruz:\n");
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatriz Octaedro:\n");
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    return 0;
}