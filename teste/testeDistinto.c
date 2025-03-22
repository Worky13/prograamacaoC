#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas == 0) return; // Condição de parada
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento do Bispo
void moverBispo(int casas) {
    if (casas == 0) return; // Condição de parada
    printf("Cima, Direita\n");
    moverBispo(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas == 0) return; // Condição de parada
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

// Função para o movimento do Cavalo com loops aninhados
void moverCavalo() {
    int i = 0;
    while (i < 2) { // Duas casas para cima
        printf("Cima\n");
        i++;
        if (i == 2) { // Condição para sair do loop
            break;
        }
    }
    printf("Direita\n"); // Uma casa para a direita
}

// Função para o movimento do Bispo com loops aninhados
void moverBispoComLoops() {
    for (int i = 1; i <= 5; i++) { // Loop vertical
        for (int j = 1; j <= i; j++) { // Loop horizontal (diagonal)
            printf("Cima, Direita\n");
        }
    }
}

int main() {
    int casasTorre = 5; // Número de casas que a Torre se move
    int casasBispo = 5; // Número de casas que o Bispo se move
    int casasRainha = 8; // Número de casas que a Rainha se move

    // Movimento da Torre com recursividade
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Movimento do Bispo com recursividade
    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispo(casasBispo);

    // Movimento da Rainha com recursividade
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Movimento do Cavalo com loops complexos
    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    // Movimento do Bispo com loops aninhados
    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    moverBispoComLoops();

    return 0;
}