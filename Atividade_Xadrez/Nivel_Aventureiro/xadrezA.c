#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita. Usando for.
    printf("Movimento de casas da Torre:\n");
    for (int torre = 1; torre <= 5; torre++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita. Usando while.
    printf("\nMovimento de casas do Bispo:\n");
    int bispo = 1;
    while (bispo <= 5) {
        printf("Cima, Direita\n");
        bispo++;
    }

    // Movimento da Rainha: 8 casas para a esquerda. Usando do-while.
    printf("\nMovimento de casas da Rainha:\n");
    int rainha = 1;
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);


    // Movimento do Cavalo: 2 casas para baixo e uma para esquerda. Usando loop alinhado de For + While.
    printf("\nMovimento de casas do Cavalo:\n");
    for (int cavaloLinha = 1; cavaloLinha == 1; cavaloLinha++) { //estrutura for será executado apens uma vez
        int cavaloColuna = 1;
        while (cavaloColuna <= 2){  //estrutura while será executado 2 vezes
            printf("Baixo\n");
            cavaloColuna++;
        }
        printf("Esquerda\n");
    }

    

    return 0;
}