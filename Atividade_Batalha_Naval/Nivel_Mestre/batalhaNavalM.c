#include <stdio.h>

int main() {
    // Variáveis para tamanhos
    int TAM_TABULEIRO = 10;
    int TAM_NAVIO = 3;
    int TAM_HABILIDADE = 7;  // Tamanho das matrizes de habilidade
    
    // Valores para representação
    int AGUA = 0;
    int NAVIO = 3;
    int HABILIDADE = 5;

    // Declaração do tabuleiro usando a variável de tamanho
    int tabuleiro[10][10];

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
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaNavio1][colunaNavio1 + i] = NAVIO; // Navio 1 horizontal
        tabuleiro[linhaNavio2 + i][colunaNavio2] = NAVIO; // Navio 2 vertical
        tabuleiro[linhaNavio3 + i][colunaNavio3 + i] = NAVIO; // Navio 3 diagonal
        tabuleiro[linhaNavio4 + i][colunaNavio4 - i] = NAVIO; // Navio 4 diagonal
    }

    // Matrizes para as habilidades especiais
    int cone[7][7] = {0};
    int cruz[7][7] = {0};
    int octaedro[7][7] = {0};
    
    // Preenchimento da matriz Cone
    int centro = TAM_HABILIDADE / 2;
    for (int i = 0; i < TAM_HABILIDADE / 2; i++) {
        int largura = 2 * i + 1;
        int inicio = centro - i;
        for (int j = inicio; j < inicio + largura; j++) {
            cone[i][j] = 1;
        }
    }
    
    // Preenchimento da matriz Cruz
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        cruz[centro][i] = 1;  // Linha horizontal
        cruz[i][centro] = 1;  // Coluna vertical
    }
    
    // Preenchimento da matriz Octaedro (formato de losango)
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            if (abs(i - centro) + abs(j - centro) <= centro) {
                octaedro[i][j] = 1;
            }
        }
    }

    // Pontos de origem para as habilidades no tabuleiro
    int linhaCone = 2, colunaCone = 3;
    int linhaCruz = 5, colunaCruz = 5;
    int linhaOctaedro = 7, colunaOctaedro = 7;

    // Aplicar habilidades ao tabuleiro
    for (int h = 0; h < 3; h++) {
        int (*habilidade)[7];  // Ponteiro para matriz de habilidade
        int linha, coluna;
        
        if (h == 0) { habilidade = cone; linha = linhaCone; coluna = colunaCone; }
        else if (h == 1) { habilidade = cruz; linha = linhaCruz; coluna = colunaCruz; }
        else { habilidade = octaedro; linha = linhaOctaedro; coluna = colunaOctaedro; }
        
        for (int i = 0; i < TAM_HABILIDADE; i++) {
            for (int j = 0; j < TAM_HABILIDADE; j++) {
                if (habilidade[i][j] == 1) {
                    int lin = linha + i - centro;
                    int col = coluna + j - centro;
                    if (lin >= 0 && lin < TAM_TABULEIRO && col >= 0 && col < TAM_TABULEIRO) {
                        tabuleiro[lin][col] = HABILIDADE;
                    }
                }
            }
        }
    }

    // Exibir o tabuleiro com as habilidades aplicadas
    printf("Tabuleiro com habilidades aplicadas:\n");
    printf("Legenda: %d = Água, %d = Navio, %d = Área de habilidade\n\n", AGUA, NAVIO, HABILIDADE);
    
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    // Exibir as matrizes de habilidade
    printf("\nMatriz Cone:\n");
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