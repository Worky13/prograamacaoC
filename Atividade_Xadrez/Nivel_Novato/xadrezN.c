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

    return 0;
}