#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas <= 0) return; // Condição de parada da recursão
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento do Bispo
void moverBispo(int casas) {
    if (casas <= 0) return; // Condição de parada da recursão
    printf("Cima, Direita\n");
    moverBispo(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas <= 0) return; // Condição de parada da recursão
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

// Função para o movimento do Cavalo com loops aninhados
void moverCavalo() {
    for (int i = 1; i <= 2; i++) { // Loop para as duas casas para cima
        printf("Cima\n");
    }
    printf("Direita\n"); // Uma casa para a direita
}

// Função para o movimento do Bispo com loops aninhados
void moverBispoComLoops() {
    for (int vertical = 1; vertical <= 5; vertical++) { // Loop vertical
        for (int horizontal = 1; horizontal <= 5; horizontal++) { // Loop horizontal
            printf("Cima, Direita\n");
        }
    }
}

int main() {
    int casasTorre = 5; // Número de casas que a Torre se move
    int casasBispo = 5; // Número de casas que o Bispo se move
    int casasRainha = 8; // Número de casas que a Rainha se move

    // Movimento da Torre com recursividade
    printf("Movimento de casas da Torre:\n");
    moverTorre(casasTorre);

    // Movimento do Bispo com recursividade
    printf("\nMovimento de casas do Bispo (Recursivo):\n");
    moverBispo(casasBispo);

    // Movimento da Rainha com recursividade
    printf("\nMovimento de casas da Rainha:\n");
    moverRainha(casasRainha);

    // Movimento do Cavalo com loops complexos
    printf("\nMovimento de casas do Cavalo:\n");
    moverCavalo();

    // Movimento do Bispo com loops aninhados
    printf("\nMovimento de casas do Bispo (Loops Aninhados):\n");
    moverBispoComLoops();

    return 0;
}